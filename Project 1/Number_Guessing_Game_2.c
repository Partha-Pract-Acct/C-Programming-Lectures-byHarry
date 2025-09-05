/* Added max_attempts */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); // Seed the random number generator

    int random_num = (rand() % 100) + 1; // Random number between 1 and 100
    int guess;
    int attempts = 0;
    int max_attempts = 5;

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

    return 0;
}
