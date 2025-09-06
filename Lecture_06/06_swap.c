/* Swap */

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 4, y = 6;
    swap(&x, &y);
    printf("The value of x is %d and the value of y is %d", x, y);
    return 0;
}