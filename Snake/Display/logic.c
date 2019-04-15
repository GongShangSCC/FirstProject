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
void fruitPosition()
{
		oranges.x = rand() % WIDTH;
		oranges.y = rand() % HEIGHT;
}

void Logic()
{
    coordinates tmp;
    tmp.x = snake[length].x;
    tmp.y = snake[length].y;
    int i = 0, j;
	switch (dir)
	{
        case LEFT:
            if((snake[length].x - 1 == oranges.x && snake[length].y == oranges.y ))
            {
                snake[length + 1].x = oranges.x;
                snake[length + 1].y = oranges.y;
                length++;
                fruitPosition();
                score++;
            }
            else
            {
                snake[length].x--;
                for(i = length - 1;i >= 0;i--)
                {
                    j = snake[i].x;
                    snake[i].x = tmp.x;
                    tmp.x = j;
                    j = snake[i].y;
                    snake[i].y = tmp.y;
                    tmp.y = j;
                }
            }

            break;
        case RIGHT:
            if((snake[length].x + 1 == oranges.x && snake[length].y == oranges.y ))
            else
            {
                snake[length].x++;
                for(i = length - 1;i >= 0;i--)
                {
                    j = snake[i].x;
                    snake[i].x = tmp.x;
                    tmp.x = j;
                    j = snake[i].y;
                    snake[i].y = tmp.y;
                    tmp.y = j;
                }
            }
            break;
        case UP:
            if((snake[length].x == oranges.x && snake[length].y - 1 == oranges.y ))
            else
            {
                snake[length].y--;
                for(i = length - 1;i >= 0;i--)
                {
                    j = snake[i].x;
                    snake[i].x = tmp.x;
                    tmp.x = j;
                    j = snake[i].y;
                    snake[i].y = tmp.y;
                    tmp.y = j;
                }
            }
            break;
        case DOWN:
            if((snake[length].x == oranges.x && snake[length].y + 1 == oranges.y ))
            else
            {
                snake[length].y++;
                for(i = length - 1;i >= 0;i--)
                {
                    j = snake[i].x;
                    snake[i].x = tmp.x;
                    tmp.x = j;
                    j = snake[i].y;
                    snake[i].y = tmp.y;
                    tmp.y = j;
                }
            }
            break;
	}
	if (snake[length].x >= WIDTH)
		snake[length].x = 0;
	if (snake[length].x < 0)
		snake[length].x = WIDTH;
	if (snake[length].y >= HEIGHT)
		snake[length].y = 0;
	if (snake[length].y < 0)
		snake[length].y = HEIGHT;

}
