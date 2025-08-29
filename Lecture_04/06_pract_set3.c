/* Write a program to sum first ten natural numbers using for loops */

#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum += i; // sum = sum + i;
    }
    printf("The sum of first ten natural number is %d", sum);
    return 0;
}