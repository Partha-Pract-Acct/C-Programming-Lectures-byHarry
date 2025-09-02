/* Write a program using functions to print the following pattern (first n lines)
 *
 ***
 *****
 */

#include <stdio.h>

int main()
{
    int n; // n = 3;

    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("\n");
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
    }
    return 0;
}