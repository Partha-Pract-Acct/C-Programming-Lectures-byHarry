/* File write (append) "a" */

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("partha.txt", "a");
    int num = 2025;

    fprintf(ptr, "%d", num);
    fclose(ptr); // to close file

    return 0;
}