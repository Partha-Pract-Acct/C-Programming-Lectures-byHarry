/* Write a program to check whether a given number is prime or not using do-while loop */

#include <stdio.h>

int main()
{
    int n;
    int prime = 1;
    int i = 2;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        prime = 0;
    }
    else
    {
        do
        {
            if (n % i == 0 && n != 2)
            {
                prime = 0;
                break;
            }
            i++;
        } while (i < n);
    }

    if (prime)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
    return 0;
}