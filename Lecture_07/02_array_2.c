/* Array_2 */

#include <stdio.h>

int main()
{
    int arr[5];

    printf("Enter marks of 5 students\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d\n", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks at index %d is %d\n", i, arr[i]);
    }

    return 0;
}