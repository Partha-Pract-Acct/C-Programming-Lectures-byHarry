/* Used function to avoid garbage. (Final file) */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to play the guessing game
void playGame(int, int);
void playGame(int random_num, int max_attempts)
{
    int guess;
    int attempts = 0;

    if (max_attempts >> 0 && max_attempts <= 20) // player can select max attempts between 1 and 20
    {
        printf("Guess the number between 1 and 100. You have %d attempts.\n", max_attempts);

        while (attempts < max_attempts)
        {
            printf("Enter your guess: ");
            scanf("%d", &guess);

            if (guess >= 0 && guess <= 100)
            {
                attempts++;

                if (guess > random_num)
                {
                    printf("Lower number please! Attempts left: %d\n", max_attempts - attempts);
                }
                else if (guess < random_num)
                {
                    printf("Higher number please! Attempts left: %d\n", max_attempts - attempts);
                }
                else
                {
                    printf("Correct! You guessed it in %d attempts.\n", attempts);
                    return; // Exit function
                }
            }
            else
            {
                printf("Some thing is wrong! Enter a number between 1 and 100\n");
            }
        }

        printf("Out of attempts! The correct number was %d.\n", random_num);
    }
    else
    {
        printf("Something is wrong!");
    }
}

int main()
{
    srand(time(0));                      // Seed the random number generator
    int random_num = (rand() % 100) + 1; // Random number between 1 and 100
    float select_attempts;
    int max_attempts; // for yes (1)
    int fix = 5;      // for no (0)

    printf("Do you want to set attempts?\n");
    printf("For yes press 1\n");
    printf("For no press 0\n");
    scanf("%f", &select_attempts);

    if (select_attempts == 0.0 || select_attempts == 1.0)
    {
        if (select_attempts == 1)
        {
            printf("You can choose attempts between 1 and 20\n");
            printf("Choose attempts: ");
            scanf("%d", &max_attempts);
            playGame(random_num, max_attempts);
        }
        else
        {
            playGame(random_num, fix);
        }
    }
    else
    {
        printf("Something is wrong!\nTry again!");
    }

    return 0;
}