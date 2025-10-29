/* Write a program to create a dynamic array of 5 floats using malloc() */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 5;
    float *ptr;

    ptr = (float *)malloc(n * sizeof(float));

    ptr[0] = 3.5;
    ptr[1] = 6.6654;
    ptr[2] = 5.21;
    ptr[3] = 8.369;
    ptr[4] = 7.846;

    printf("%.3f\n", ptr[0]);
    printf("%.3f\n", ptr[1]);
    printf("%.3f\n", ptr[2]);
    printf("%.3f\n", ptr[3]);
    printf("%.3f\n", ptr[4]);
    return 0;
}