/* Int function */

#include <stdio.h>

int sum(int, int);
int sum(int x, int y)
{
    printf("The sum is: %d\n", x + y);
    return x + y;
}

int main()
{
    int a = 5;
    int b = 9;
    sum(a, b);

    sum(4, 6);

    return 0;
}