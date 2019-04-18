#include "snake.h"
//Function that listens for for when the user presses a button
void Input()
{
    fflush(stdin);
	if (_kbhit())
    {
		switch (_getch())
		{
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
//Function that will grow the snake when it eats a fruit
void buildSnake()
{
	snake[info[0].length + 1].x = oranges.x;
        snake[info[0].length + 1].y = oranges.y;
        info[0].length++;
        fruitPosition();
        info[0].score++;
}
//Function that innitializes the position of the fruit on the board using a random function
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
/*Note, the plane is going to be x horizontal and y vertical. down adds to x and vic versa 
and right adds to y and vice versa */
	switch (dir)
	{
        case UP:
            if((snake[info[0].length].x - 1 == oranges.x && snake[info[0].length].y == oranges.y ))
            {
                buildSnake();
            }
            else
            {
/*can logic team try to impliment the for potion of of the code using a function pointer and 
simplify the code and reduce the redundancy*/
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
        case DOWN:
            if((snake[info[0].length].x + 1 == oranges.x && snake[info[0].length].y == oranges.y ))
            {
                buildSnake();
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
        case LEFT:
            if((snake[info[0].length].x == oranges.x && snake[info[0].length].y - 1 == oranges.y ))
            {
                buildSnake();
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
        case RIGHT:
            if((snake[info[0].length].x == oranges.x && snake[info[0].length].y + 1 == oranges.y ))
            {

                buildSnake();
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
		snake[info[0].length].x = WIDTH - 1;
	if (snake[info[0].length].y >= HEIGHT)
		snake[info[0].length].y = 0;
	if (snake[info[0].length].y < 0)
		snake[info[0].length].y = HEIGHT - 1;

}
