#include "snake.h"

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

void Logic()
{
	switch (dir)
	{
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
