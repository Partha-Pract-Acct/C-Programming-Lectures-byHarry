/* Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest */

#include <stdio.h>

int main()
{
    float p = 40.6;
    int r = 9;
    int t = 6;

    printf("The value of simple interest is %f", (p * r * t) / 100);
    return 0;
}