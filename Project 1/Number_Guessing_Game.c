#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
    srand(time(0));  // Initialize random number generator

    int random_num = (rand() % 100) + 1;  // Generate random number between 1 and 100
    int guessed_num;
    int num_of_guesses = 0;

    
    // Print the random number
    // printf("Random Number: %d\n", random_number);


    do{
        printf("Guess the number between 1 and 100 :");
        scanf("%d", &guessed_num);

        if(guessed_num>100){
            printf("Invalid input!\t");
        }
        else if(guessed_num > random_num){
            printf("Lower number please!\n");
        }
        else if(guessed_num < random_num){
            printf("Higher number please!\n");
        }
        else{
            printf("Congrats!\n");
        }
        num_of_guesses++;
    }while(guessed_num != random_num);

    printf("You guessed the number in %d guessses", num_of_guesses);
    return 0;
}
