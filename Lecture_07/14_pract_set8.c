/* Create an array of 3x10 containing multiplication tables for a custom input given by the user */

#include <stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Enter number:\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    int arr[3][10];
    int mul[] = {n1, n2, n3};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of arr[i][j] is %d\n", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}