/* Use the library function to calculate the area of a square with side a */

#include <stdio.h>
#include <math.h>

int main()
{
    int a = 5;
    printf("The area of this square is: %f", pow(a, 2)); // pow returns double
    return 0;
}