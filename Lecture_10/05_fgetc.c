/* Use of fgetc */

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("write.txt", "r");
    char c = fgetc(ptr);
    printf("%c", c);
    return 0;
}