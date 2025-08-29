/* Switch format */

#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number :");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("you entared 1\n");
        break;
    case 2:
        printf("You entared 2\n");
        break;
    case 3:
        printf("You entared 3\n");
        break;
    case 4:
        printf("You entared 4\n");
        break;
    default:
        printf("Nothing matched");
    }
    return 0;
}