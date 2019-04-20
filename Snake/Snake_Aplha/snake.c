#include "snake.h"

void snakes()
{
    char userChoice;
    info[0].spike = FALSE;
    info[0].speed = 200;
    info[0].snakeColor = 2;
    info[0].fruitColor = 2;
    info[0].HEIGHT = 20;
    info[0].WIDTH = 20;
    restart();
    char c = '\0';
    while(1)
    {
            system("cls");
        printf("Please choose what you want to do.\n");
        printf("Type b or B to start the game.\n");
        printf("Type s or S to go to the settings.\n");
        printf("Type f or F to go out of the game.\n");
        scanf("%c",&userChoice);
        userChoice = tolower(userChoice);
        switch(userChoice)
        {
            case 'b' :
                // Start the game
                //fruitPosition();
                //initializeBoard();
                while(1)
                {
                        //initializeBoard();
                        //setBoard();
                        printBoard();
                        Input();
                        Logic();
                        if(isGameOver())
                        {
                                system("cls");
                                fflush(stdin);
                                printf("GameOver");
                                printf("Do you want to continue playing?\nY: yes\n N: no go to the menu E: Exit game\n");
                                scanf("%c", &c);
                                if(c == 'Y' || c == 'y')
                                {
                                        restart();
                                }
                                else if(c == 'n' || c == 'N')
                                {
                                        restart();
                                        break;
                                }
                                else if(c == 'E' || c == 'e')
                                {
                                       return;
                                }
                        }
                        Sleep(info[0].speed);
                }
                break;
            case 's':
                settings();
                break;
            case 'f':
                // Go out of the game
                exit(0);
                break;
            default:
                printf("Please enter your choice.\n");
                break;
        }
    }
}
