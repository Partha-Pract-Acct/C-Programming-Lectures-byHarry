/* Call by value */

#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int x = 5, y = 4;

    printf("The sum of 5 and 4 is %d\n", sum(x, y));
    printf("The value of x is: %d\n", x);
    return 0;
}