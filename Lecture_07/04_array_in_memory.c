/* Array in memory */

#include <stdio.h>

int main()
{
    int arr[5];

    printf("Enter marks of 5 students\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The address of marks at index %d is %u\n", i, &arr[i]);
    }

    return 0;
}