/* Write a program with structure representing a complex number */

#include <stdio.h>

typedef struct C
{
    int real;
    int imaginary;
} Complex;

int main()
{
    Complex c = {1, 2};
    printf("The value of vector is %d + %di", c.real, c.imaginary);
    return 0;
}