/* Write a program to calculate the factorial of a given number using while loop */

#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    int product = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (i <= n)
    {
        product *= i;
        i++;
    }

    printf("The factorial of %d is %d", n, product);
    return 0;
}