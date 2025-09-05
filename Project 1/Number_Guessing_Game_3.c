/* Added select_attempts and fix_attempts */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); // Seed the random number generator

    int random_num = (rand() % 100) + 1; // Random number between 1 and 100
    int guess;
    int attempts = 0;
    int max_attempts;     // for yes(1)
    int fix_attempts = 5; // for no(0)
    int select_attempts;

    printf("Do you want to select attemps?\n");
    printf("For yes press 1\n");
    printf("For no press 0\n");
    printf("Submit your choise: ");
    scanf("%d", &select_attempts);

    if (select_attempts == 1)
    {

        printf("Choose attempts: ");
        scanf("%d", &max_attempts);

        printf("Guess the number between 1 and 100. You have %d attempts.\n", max_attempts);

        while (attempts < max_attempts)
        {
            printf("Enter your guess: ");
            scanf("%d", &guess);
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
                return 0; // Exit after correct guess
            }
        }

        printf("Out of attempts! The correct number was %d.\n", random_num);
    }

    else if (select_attempts == 0)
    {
        printf("Guess the number between 1 and 100. You have %d attempts.\n", fix_attempts);

        while (attempts < fix_attempts)
        {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;

            if (guess > random_num)
            {
                printf("Lower number please! Attempts left: %d\n", fix_attempts - attempts);
            }
            else if (guess < random_num)
            {
                printf("Higher number please! Attempts left: %d\n", fix_attempts - attempts);
            }
            else
            {
                printf("Correct! You guessed it in %d attempts.\n", attempts);
                return 0; // Exit after correct guess
            }
        }

        printf("Out of attempts! The correct number was %d.\n", random_num);
        return 0;
    }
}
