/* File read "r" */

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("partha.txt", "r");
    int num;

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fscanf(ptr, "%d", &num);
    printf("The value of num is %d \n", num);

    fclose(ptr); // to close file

    return 0;
}