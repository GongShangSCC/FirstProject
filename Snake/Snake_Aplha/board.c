#include "snake.h"

/*void initializeBoard()
{
    int i = 0,j = 0;
    for(i = 0; i < HEIGHT; i++)
    {
        for(j = 0; j < WIDTH; j++)
        {
            board[i][j] = ' ';
        }
    }
}


void setFruit()
{
    board[oranges.x][oranges.y] = '$';
}

void setSnake()
{
    int i = 0;
    for(; i<= info[0].length; i++)
    {
        board[snake[i].x][snake[i].y] = '%';
    }
}

*/
int isStatus()
{
    return 1;
}

void printBoard()
{
    //setBoard();
    int i = 0, j = 0, k = 0, yep = 0;
    printf("Showing Score:%d \n", info[0].score);

  if(isStatus() == 0)
    {
        system("cls");
        printf("PAUSE");
    }
    else if(isStatus() == 1)
    {
       system("cls");
        for(i = 0;i < info[0].WIDTH + 2;i++)
        {
            printf("#");
        }
		printf("\n");
        for(i = 0;i < info[0].HEIGHT;i++)
        {
            printf("#");

            for(j = 0;j < info[0].WIDTH;j++)
            {
                for (k = 0; k <= info[0].length; k++)
                    if (snake[k].x == i  && snake[k].y == j)
                    {
                        yep = 1;
                        break;
                    }
                    if(yep)
                    {
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), info[0].color);
                        printf("%c",'%');
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                        yep = 0;
                    }
                    else if(oranges.x == i && oranges.y == j)
                    {
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), info[0].color);
                        printf("$");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                    }
                    else
                        printf(" ");
            }
            printf("#\n");
        }
        for(i = 0;i < info[0].WIDTH + 2;i++)
        {
            printf("#");
        }
        printf("\n");
    }
}



/*void settings()
{

	int snakeColor = 0;
	int fruitColor = 0;
    printf("What do you want you to do in the settings?\n");
    printf("1 is for changing the color of the snake\n2 is for changing the color of the fruit\n3 is changing the speed of the snake\n");
    int setting = 0;
    scanf("%d",&setting);
    switch(setting)
    {
        case 1:
            //change the color of the snake
            printf("Which color would you like to pick?\n1 is black,2 is red, 3 is green\n");

            scanf("%d",&snakeColor);
            if(snakeColor == 1)
            {
          	    //changeSnakeColor();
            }
            else if(snakeColor == 2)
            {
                //changeSnakeColor();
            }
            else if(snakeColor == 3)
            {
                //changeSnakeColor();
            }
            else
            {
                printf("Please enter a number!");
        	}
            break;
        case 2:
            //change the color of the fruit
            printf("Which color would you like to pick?\n1 is orange,2 is yellow, 3 is blue\n");
            scanf("%d",&fruitColor);
            if(fruitColor == 1)
            {
                //changeFruitColor();
            }
            else if(fruitColor == 2)SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), info[0].color);
                        printf("$");
                        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
            {
                //changeFruitColor();
            }
            else if(fruitColor == 3)
            {
                //changeFruitColor();
        	}
            else
            {
                printf("Please enter a number!");
            }
            break;
        case 3:
            //go back to the home page
            break;
        case 4:
            //choose the speed of the snake
            int snakeSpped = 0;
            printf("Enter the speed of the snake you want:\n");
            printf("1 is slow, 2 is normal speed, 3 is fast.\n");
            scanf("%d",&snakeSpped);
            if(snakeSpped == 1)
            {
                //changeSnakeSpeed();
            }
            else if(snakeSpped == 2)
            {
                //changeSnakeSpeed();
            }
            else if(snakeSpped == 3)
            {
                //changeSnakeSpeed();
            }
            else
            {
                printf("Enter a number please~");
            }
    }
}

void setBoard()
{
    setFruit();
    setSnake();
}
*/
