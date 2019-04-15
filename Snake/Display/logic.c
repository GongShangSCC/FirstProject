#include "snake.h"

void Input()
{
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
        srand((unsigned) time(&t));
		oranges.x = rand() % WIDTH;
		oranges.y = rand() % HEIGHT;
}

void Logic()
{
    coordinates tmp;
    tmp.x = snake[info[0].length].x;
    tmp.y = snake[info[0].length].y;
    int i = 0, j;
	switch (dir)
	{
        case LEFT:
            if((snake[info[0].length].x - 1 == oranges.x && snake[info[0].length].y == oranges.y ))
            {
                snake[info[0].length + 1].x = oranges.x;
                snake[info[0].length + 1].y = oranges.y;
                info[0].length++;
                fruitPosition();
                info[0].score++;
            }
            else
            {
                snake[info[0].length].x--;
                for(i = info[0].length - 1;i >= 0;i--)
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
            if((snake[info[0].length].x + 1 == oranges.x && snake[info[0].length].y == oranges.y ))
            {
                snake[info[0].length + 1].x = oranges.x;
                snake[info[0].length + 1].y = oranges.y;
                info[0].length++;
                fruitPosition();
                info[0].score++;
            }
            else
            {
                snake[info[0].length].x++;
                for(i = info[0].length - 1;i >= 0;i--)
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
            if((snake[info[0].length].x == oranges.x && snake[info[0].length].y - 1 == oranges.y ))
            {
                snake[info[0].length + 1].x = oranges.x;
                snake[info[0].length + 1].y = oranges.y;
                info[0].length++;
                fruitPosition();
                info[0].score++;
            }
            else
            {
                snake[info[0].length].y--;
                for(i = info[0].length - 1;i >= 0;i--)
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
            if((snake[info[0].length].x == oranges.x && snake[info[0].length].y + 1 == oranges.y ))
            {

                snake[info[0].length + 1].x = oranges.x;
                snake[info[0].length + 1].y = oranges.y;
                info[0].length++;
                fruitPosition();
                info[0].score++;
            }
            else
            {
                snake[info[0].length].y++;
                for(i = info[0].length - 1;i >= 0;i--)
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
	if (snake[info[0].length].x >= WIDTH)
		snake[info[0].length].x = 0;
	if (snake[info[0].length].x < 0)
		snake[info[0].length].x = WIDTH;
	if (snake[info[0].length].y >= HEIGHT)
		snake[info[0].length].y = 0;
	if (snake[info[0].length].y < 0)
		snake[info[0].length].y = HEIGHT;

}
