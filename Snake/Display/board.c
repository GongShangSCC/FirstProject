#include "snake.h"
void printBoard()
{
    char board[HEIGHT][WIDTH];
    int i = 0, j = 0;
    printf("Showing UI:%d \t", score);
    if(!isGameOver())
    {
        fflush(stdout);
        printf("GAMEOVER");
        restart();
    }
    else if(isStatus() == 0)
    {
        fflush(stdout);
        printf("PAUSE");
    }
    else if()
    {
        board = setBoard();
        printf("|")
        for(i = 0;i < 20;i++)
        {
            printf("_")
        }
        printf("|\n")
        for(i = 0;i < 20;i++)
        {
            printf("|")
            for(j = 0;j < 20;j++)
            {
                printf("%c", board[i][j]);
            }
            printf("|\n")
        }
        printf("|")
        for(i = 0;i < 20;i++)
        {
            printf("_")
        }
        printf("|\n")
    }

}

char setBoard(char board[][])
{
}
