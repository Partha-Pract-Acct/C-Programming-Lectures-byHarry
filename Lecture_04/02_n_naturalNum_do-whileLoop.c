/* write a program to print first 'n' natural numbers using do-while loop */

#include <stdio.h>

int main()
{
    int n;
    int i = 1;

    printf("Enter the valu: ");
    scanf("%d", &n);

    do
    {
        printf("The value of i is %d\n", i);
        i++;
    } while (i <= n);

    return 0;
}