/* Write a program to read three integers from a file */

#include <stdio.h>

int main()
{
    FILE *ptr;
    int num1, num2, num3;
    ptr = fopen("practice01.txt", "r");

    fscanf(ptr, "%d %d %d", &num1, &num2, &num3);
    printf("The values are %d %d %d \n", num1, num2, num3);

    fclose(ptr); // to close file

    return 0;
}