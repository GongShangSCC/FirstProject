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
    if (coordinates[length].x == oranges.x && coordinates[length].y == oranges.y )
    {
		oranges.x = rand() % WIDTH;
		oranges.y = rand() % HEIGHT;
		score++;
	}
}

void Logic()
{
    coordinates tmp;
    tmp.x = coordinates[length].x;
    tmp.y = coordinates[length].y;
    int i = 0, j;
	switch (dir)
	{
        case LEFT:
            if((coordinates[length].x - 1 == oranges.x && coordinates[length].y == oranges.y ))
            {
                coordinates[length + 1].x = oranges.x;
                coordinates[length + 1].y = oranges.y;
                length++;
                fruitPosition();
            }
            else
            {
                coordinates[length].x--;
                for(i = length - 1;i >= 0;i--)
                {
                    j = coordinates[i].x;
                    coordinates[i].x = tmp.x;
                    tmp.x = j;
                    j = coordinates[i].y;
                    coordinates[i].y = tmp.y;
                    tmp.y = j;
                }
            }

            break;
        case RIGHT:
            if((coordinates[length].x + 1 == oranges.x && coordinates[length].y == oranges.y ))
            else
            {
                coordinates[length].x++;
                for(i = length - 1;i >= 0;i--)
                {
                    j = coordinates[i].x;
                    coordinates[i].x = tmp.x;
                    tmp.x = j;
                    j = coordinates[i].y;
                    coordinates[i].y = tmp.y;
                    tmp.y = j;
                }
            }
            break;
        case UP:
            if((coordinates[length].x == oranges.x && coordinates[length].y - 1 == oranges.y ))
            else
            {
                coordinates[length].y--;
                for(i = length - 1;i >= 0;i--)
                {
                    j = coordinates[i].x;
                    coordinates[i].x = tmp.x;
                    tmp.x = j;
                    j = coordinates[i].y;
                    coordinates[i].y = tmp.y;
                    tmp.y = j;
                }
            }
            break;
        case DOWN:
            if((coordinates[length].x == oranges.x && coordinates[length].y + 1 == oranges.y ))
            else
            {
                coordinates[length].y++;
                for(i = length - 1;i >= 0;i--)
                {
                    j = coordinates[i].x;
                    coordinates[i].x = tmp.x;
                    tmp.x = j;
                    j = coordinates[i].y;
                    coordinates[i].y = tmp.y;
                    tmp.y = j;
                }
            }
            break;
	}
	if (coordinates[length].x >= WIDTH)
		coordinates[length].x = 0;
	if (coordinates[length].x < 0)
		coordinates[length].x = WIDTH;
	if (coordinates[length].y >= HEIGHT)
		coordinates[length].y = 0;
	if (coordinates[length].y < 0)
		coordinates[length].y = HEIGHT;

}
