#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <random>

#define WIDTH 20
#define HEIGHT 20
bool gameOver = false;
int snakeX, snakeY, fruitX, fruitY;
int score;
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;

void Settings() {
	score = 0;
	dir = STOP;
	fruitX = rand() % WIDTH;
	fruitX = rand() % HEIGHT;
	snakeX = WIDTH / 2 - 1;
	snakeY = HEIGHT / 2 - 1;
}

void Visual() {
	system("cls");
	for (int i = 0; i < WIDTH + 2; i++)
		printf("#");
	printf("\n");

	for (int i = 0; i < WIDTH; i++) {
		printf("#");
		for (int j = 0; j < WIDTH; j++) {
			if (j > 1 || j < 18)
				printf(" ");
			if (i == snakeY && j == snakeX)
				printf("0");
			if (i == fruitY && j == fruitX)
				printf("F");
		}
		printf("#");
		printf("\n");
	}

	for (int i = 0; i < WIDTH + 2; i++)
		printf("#");

	printf("\nSCORE: %d", score);
	printf("\n");
}

void Input() {
	if (_kbhit()) {
		switch (_getch()) {
		case 'a':
			dir = LEFT;
			break;
		case 'd':
			dir = RIGHT;
			break;
		case 'w':
			dir = UP;
			break;
		case 's':
			dir = DOWN;
			break;
		}
	}
}

void Logic() {
	switch (dir) {
	case LEFT:
		snakeX--;
		break;
	case RIGHT:
		snakeX++;
		break;
	case UP:
		snakeY--;
		break;
	case DOWN:
		snakeY++;
		break;
	}
	if (snakeX >= WIDTH)
		snakeX = 0;
	if (snakeX < 0)
		snakeX = WIDTH;
	if (snakeY >= HEIGHT)
		snakeY = 0;
	if (snakeY < 0)
		snakeY = HEIGHT;

	if (snakeX == fruitX && snakeY == fruitY) {
		fruitX = rand() % WIDTH;
		fruitY = rand() % HEIGHT;
		score++;
	}
}

void main() {
	Settings();
	while (!gameOver) {
		Visual();
		Logic();
		Input();
	}

	system("pause");
}