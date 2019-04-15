#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <conio.h>
#include <random>
#include <stdlib.h>
#include <windows.h>
#define MAX 400
#define HEIGHT 20
#define WIDTH 20

enum gameOver{TRUE = 0, FALSE = 1};
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
enum status{PAUSED = 0, STARTED = 1};
int score = 0;
void snake();
void changeSnakeSpeed();
void changeSnakeColor();
void changeFruitColor();
void startGame();
void settings();
void finishGame();
void initializeBoard();
void setFruit();
void setSnake();
void printBoard();
void setBoard();
//void snake();
void fruitPosition();

status stat;
//Hold the array position of the fruit
typedef struct fruit
{
    short x;
    short y;
}fruit;

//Hold the array position of board and the position of the snake ;ppp
typedef struct coordinates
{
    short x;
    short y;
}coordinates;
eDirection dir;
coordinates snake[MAX];
int length = 0;
char board[HEIGHT][WIDTH];
fruit oranges;
void Input();
void Logic();
void fruitPosition();
