/*  Write a C program to calculate area of a rectangle

 (a)using hand coded input
 (b)using inputs supplied by user */

#include <stdio.h>

int main()
{
    // int length = 4;
    // int width = 5;
    int length, width;

    printf("Enter length :\n");
    scanf("%d", &length);

    printf("Enter width :\n");
    scanf("%d", &width);

    printf("The area of the rectangle is %d", length * width);
    return 0;
}