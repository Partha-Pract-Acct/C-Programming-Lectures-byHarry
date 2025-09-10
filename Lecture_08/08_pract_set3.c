/* Write your own version of strlen function from <strin.h> */

#include <stdio.h>

int strlen(char str[])
{
    int i = 0;
    int count;
    char c = str[i];

    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
}

int main()
{
    char str[] = "Partha";

    printf("%d", strlen(str));

    return 0;
}