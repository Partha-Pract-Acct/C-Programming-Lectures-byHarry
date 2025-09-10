/* String function */

#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Hello";
    char s1[56] = "Hello";
    char s2[56] = " World";

    // printf("%d", strlen(st));
    char target[30];
    strcpy(target, st); // target now contains "Hello"
    // printf("%s %s", st, target);

    strcat(s1, s2); // s1 now contains "helloHello" <no space in between>
    // printf("%s", s1);

    int a = strcmp("deep", "joke"); // DJ is negative
    printf("%d", a);

    return 0;
}