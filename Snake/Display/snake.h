#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <conio.h>
#include <random>
#include <stdlib.h>
#include <windows.h>

#define HEIGHT 20
#define WIDTH 20
enum gameOver{TRUE = 0, FALSE = 1};
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
enum status{PAUSED = 0, STARTED = 1};
int score;
void menuFunction();
void changeSnakeSpeed();
void changeSnakeColor();
void changeFruitColor();
void startGame();
void settings();
void finishGame();
void initializeBoard(char board[][]);
void setFruit(char board[][],fruit oranges);
void setSnake(char board[][],coordinates * snake , int iSize);
void printBoard();
void setBoard(short board[][]);
void snake()

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

char board[HEIGHT][WIDTH];
fruit oranges;
void Input();
