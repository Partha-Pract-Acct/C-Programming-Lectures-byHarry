/* File write "w" */

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("partha.txt", "w");
    int num = 2025;

    fprintf(ptr, "%d", num);
    fclose(ptr); // to close file

    return 0;
}