/* write a program to take string as an input from the user %c confirm that the string is equal */

#include <stdio.h>

int main()
{
    char str[7];

    printf("Enter:\n");

    for (int i = 0; i < 6; i++)
    {
        scanf("%c", &str[i]);
        fflush(stdin); // to avoid the count of Enter press
    }
    str[6] = '\0';

    printf("%s", str);

    return 0;
}