/* Write a program to convert celsius to fahrenheit */

#include <stdio.h>

int main()
{
    float c;
    float f;

    printf("Enter the value in celcius : ");
    scanf("%f", &c);

    f = ((9.0 / 5.0) * c) + 32;

    printf("The value in Fahrenheit is %f ", f);
    return 0;
}