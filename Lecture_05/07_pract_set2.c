/* Write a function to convert celcius temperature into farenheit */

#include <stdio.h>

float convert(float);
float convert(float n)
{
    return (9.0 / 5.0) * n + 32;
}

int main()
{
    float a;

    printf("Enter the value: ");
    scanf("%f", &a);

    printf("Celsius to fehrenheit for %f is %f", a, convert(a));
    return 0;
}