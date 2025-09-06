/* Write a program using a function which calculates the sum and average of two numbers. Use pointer and print the values of sum and average in main() */

#include <stdio.h>

int *sum(int a, int b)
{
    int s = a + b;
    printf("The sum is %d\n", s);
    int *ptr = &s;
    return ptr;
}

float *average(float a, float b)
{
    float avg = (a + b) / 2.0;
    printf("The average is %f\n", avg);
    float *ptr = &avg;
    return ptr;
}
int main()
{
    int x = 15;
    int y = 5;

    int *ptr1;
    float *ptr2;

    ptr1 = sum(x, y);
    ptr2 = average(x, y);
    printf("The address of sum is %p and the address of average is %p", ptr1, ptr2);

    return 0;
}