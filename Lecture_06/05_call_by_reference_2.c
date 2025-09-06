/* Call by reference 2 */

#include <stdio.h>

int sum(int *a, int *b)
{
    *a = 6;
    return *a + *b;
}
int main()
{
    int x = 15, y = 4;
    printf("The sum of 15 and 4 is %d\n", sum(&x, &y));
    printf("The value of x is: %d\n", x);
    return 0;
}
