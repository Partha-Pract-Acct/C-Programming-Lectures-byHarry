/* Write a program to calculate the factorial of a given number using for loop */

#include <stdio.h>

int main()
{
    int n;
    int product = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        product *= i;
    }

    printf("The factorial of %d is %d", n, product);

    return 0;
}