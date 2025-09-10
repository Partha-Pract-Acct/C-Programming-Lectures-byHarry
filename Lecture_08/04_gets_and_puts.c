/* Gets and puts */

#include <stdio.h>

int main()
{
    char st[10];

    printf("Write here: ");
    gets(st); // The entered string is stored in st

    printf("%s", st);

    // puts(st);
    printf("Hello"); // gets(st) will show entered string + (Hello) without any space
                     //  puts(st) will show entered string + (Hello) in the next line

    return 0;
}