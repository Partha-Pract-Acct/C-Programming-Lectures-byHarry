/* Use of fgetc */

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("partha.txt", "r");
    char c = fgetc(ptr);
    printf("%c", c);
    return 0;
}