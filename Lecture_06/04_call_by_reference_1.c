/* Call by reference 1 */

#include <stdio.h>

void num(int *a)
{
    *a = 6;
}
int main()
{
    int x = 10;
    num(&x);
    printf("The value of x is: %d\n", x);
    return 0;
}
