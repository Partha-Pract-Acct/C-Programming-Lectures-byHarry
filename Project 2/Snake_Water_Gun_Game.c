#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(0)); // Initialize random number generator
    int player;
    int computer = (rand() % 3); // Generate random number between 1 and 3

    printf("Choose 0 for Snake.\nChoose 1 for Water.\nChoose 2 for Gun.\n");
    printf("Choose your number :");
    scanf("%d", &player);

    printf("You choise : %d\n", player);
    printf("Computer chose : %d \n", computer);

    if (player == 0 && computer == 0)
    {
        printf("It's a Draw!\n");
    }
    else if (player == 0 && computer == 1)
    {
        printf("You Win!\n");
    }
    else if (player == 0 && computer == 2)
    {
        printf("You Lose!\n");
    }
    else if (player == 1 && computer == 0)
    {
        printf("You Lose!\n");
    }
    else if (player == 1 && computer == 1)
    {
        printf("It's a Draw!\n");
    }
    else if (player == 1 && computer == 2)
    {
        printf("You Win!\n");
    }
    else if (player == 2 && computer == 0)
    {
        printf("You win!\n");
    }
    else if (player == 2 && computer == 1)
    {
        printf("You Lose!\n");
    }
    else if (player == 2 && computer == 2)
    {
        printf("It's a Draw!\n");
    }
    else
    {
        printf("Somthing is wrong!");
    }

    return 0;
}