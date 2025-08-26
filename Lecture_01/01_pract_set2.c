/* Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height */

#include <stdio.h>

int main()
{
    int r = 5;
    int height = 10;
    printf("The are of circle with radious %d is %f\n", r, 3.1416 * r * r);
    printf("The volume of cylinder with radious %d and height %d is %f", r, height, 3.1416 * r * r * height); // the volume of a cylinder = pai*r(sq)*h
    return 0;
}