#include "snake.h"


void printBoard()
{
    int i = 0, j = 0, k = 0, yep = 0;
    printf("Showing Score:%d \n", info[0].score);

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
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), info[0].snakeColor);
                    printf("%c",'%');
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                    yep = 0;
                }
                else if(oranges.x == i && oranges.y == j)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), info[0].fruitColor);
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

    printf("Controls:\nw - up \nd - down\na - left\nd - d\np - pause\n");
}



void settings()
{
    int snack;
    int snakeSpped = 0;
    while(1)
    {
        system("cls");
        printf("What do you want you to do in the settings?\n");
        printf("1 is for changing the color of the snake\n2 is for changing the color of the fruit\n3 is changing the speed of the snake\n4 Walls become dangerous\n5 Change board dimensions \n6 Exit \n");
        int setting = 0;
        scanf("%d",&setting);
        switch(setting)
        {
            case 1:
                //change the color of the snake
                printf("Which color would you like to pick?\n");
                for (int i = 0; i < 256; i++)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
                    printf("%d\n", i);
                }
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                do
                {
                    scanf("%d",&snack);
                }while(snack < 0 || snack >= 256);
                info[0].snakeColor = snack;
                break;
            case 2:
                //change the color of the fruit
                printf("Which color would you like to pick?\n");
                for (int i = 0; i < 256; i++)
                {
                    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
                    printf("%d\n", i);
                }
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                do
                {
                    scanf("%d",&snack);
                }while(snack < 0 || snack >= 256);
                info[0].fruitColor = snack;
                break;
            case 3:
                //choose the speed of the snake

                printf("Enter the speed of the snake you want:\n");
                printf("1 is slow, 2 is normal speed, 3 is fast. 4 Custom\n");
                scanf("%d",&snakeSpped);
                if(snakeSpped == 1)
                {
                    info[0].speed = 400;
                }
                else if(snakeSpped == 2)
                {
                    info[0].speed = 100;
                }
                else if(snakeSpped == 3)
                {
                    info[0].speed = 40;
                }
                else if(snakeSpped == 4)
                {
                    do
                        scanf("%d",&snack);
                    while(snack <= 0);
                    info[0].speed = snack;
                }
                break;
            case 4:
                printf("Spiky walls 1 - true or 0 - false :\n");
                scanf("%d",&snakeSpped);
                if(snakeSpped)
                {
                    info[0].spike = TRUE;
                }
                else
                {
                    info[0].spike = FALSE;
                }
                break;
            case 5:
                printf("Enter the size of the board:\n");
                printf("1 is small, 2 is normal , 3 is Large.\n");
                scanf("%d",&snakeSpped);
                if(snakeSpped == 1)
                {
                    info[0].HEIGHT = 10;
                    info[0].WIDTH = 10;
                }
                else if(snakeSpped == 2)
                {
                    info[0].HEIGHT = 20;
                    info[0].WIDTH = 20;
                }
                else if(snakeSpped == 3)
                {
                    info[0].HEIGHT = 50;
                    info[0].WIDTH = 50;
                }
                break;
            case 6:
                return;
                break;
        }
    }

}

