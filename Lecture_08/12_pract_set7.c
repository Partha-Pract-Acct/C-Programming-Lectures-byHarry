/* Write a program to decrypt the string encrypted using encrypt function */

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Pof!ebz!J!xjmm!gffm!zpv!qspve";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }

    printf("%s", str);
    return 0;
}