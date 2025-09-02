/* Write a program using function to find average of the three numbers */

#include <stdio.h>

float avg(int, int, int);
float avg(int x, int y, int z)
{
    return ((x + y + z) / 3.0);
}

int main()
{
    int a, b, c;
    printf("Enter the three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    printf("The average of %d, %d, %d is: %f", a, b, c, avg(a, b, c));
    return 0;
}