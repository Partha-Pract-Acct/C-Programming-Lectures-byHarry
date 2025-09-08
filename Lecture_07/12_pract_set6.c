/* Write a program counting functions which counts the number of positive integers in an array */

#include <stdio.h>

int count(int arr[], int n)
{
    int num_of_positive = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            num_of_positive++;
        }
    }
    return num_of_positive;
}

int main()
{
    int a[] = {7, 66, -63, 45, -5, 8, 7, -4};

    printf("The number of positive integers is: %d", count(a, 8));
    return 0;
}