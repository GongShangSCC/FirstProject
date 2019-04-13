#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <windows.h>

#define HEIGHT 20
#define WIDTH 20
enum gameOver{TRUE = 0, FALSE = 1};
enum eDirections{STOP = 0, UP, DOWN, LEFT, RIGHT};
//enum status{PAUSED = 0, STARTED = 1,MENU};
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

void printBoard();
short setBoard(short board[][]);

