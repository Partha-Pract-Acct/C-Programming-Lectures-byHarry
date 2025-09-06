/* Pointer */

#include <stdio.h>

int main()
{
    int i = 10;
    int *j = &i;

    int k = 45;

    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", j);
    printf("The value at address i is %d\n", *(&i));

    printf("The address of k is %p\n", &k);

    printf("The value of k is %d\n", k);             // normal print we do
    printf("The value at address k is %p\n", *(&k)); // in this case it will (%p) print value in hexadecimal
    printf("The value at address k is %d\n", *(&k)); // in this case it will (%d) print value in decimal
    return 0;
}