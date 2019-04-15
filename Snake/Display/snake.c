#include "snake.h"

void snake()
{
    char userChoice;
    fruitPosition();
    snake[length].x = 10;
    snake[length].y = 10;
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
                printBoard();
                Input();
                Logic();
                setBoard();
                printBoard();
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
