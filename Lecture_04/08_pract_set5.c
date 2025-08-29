/* Write a program to sum first ten natural numbers using do-while loops */

#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;

    do
    {
        sum += i;
        i++;
    } while (i <= 10);

    printf("The value of first ten natural number is %d", sum);
    return 0;
}