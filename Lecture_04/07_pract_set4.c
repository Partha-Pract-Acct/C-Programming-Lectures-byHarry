/* Write a program to sum first ten natural numbers using while loops */

#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;

    while (i <= 10)
    {
        sum += i;
        i++;
    }

    printf("The sum of first ten natural number is %d", sum);
    return 0;
}