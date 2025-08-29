/* Write a program to calculate the factorial of a given number using do-while loop */

#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    int product = 1;

    printf("Enter the number: ");
    scanf("%d", &n);

    do
    {
        product *= i;
        i++;
    } while (i <= n);

    printf("The factorial of %d is %d", n, product);
    return 0;
}