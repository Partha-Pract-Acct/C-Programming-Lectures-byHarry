/* Write a program to calculate the sum of the numbers occurring in the multiplication table of 8 (Consider 8x1 to 8x10) */

#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        sum += (8 * i);
    }

    printf("The sum of table 8 is %d", sum);

    return 0;
}