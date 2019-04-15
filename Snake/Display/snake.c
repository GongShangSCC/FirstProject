#include "snake.h"

void snakes()
{
    char userChoice;
    info[0].length = 0;
    fruitPosition();
    snake[info[0].length].x = 10;
    snake[info[0].length].y = 10;
    info[0].score = 0;
    int c;
    while(1)
    {
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
                fruitPosition();
                initializeBoard();
                while(1)
                {
                        initializeBoard();
                        setBoard();
                        printBoard();
                        Input();
                        Logic();
                        for(c = 0; c< 10000; c++);
                }

                return;
                break;
            case 's':
                // Go to the settings
                //settings();
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
