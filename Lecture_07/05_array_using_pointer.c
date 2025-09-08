/* Array using pointer */

#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40};

    int *ptr = &arr[0]; // int *ptr = arr;

    for (int i = 0; i < 4; i++)
    {
        printf("The marks at index %d is %u\n", i, *ptr);
        ptr++;
    }

    return 0;
}