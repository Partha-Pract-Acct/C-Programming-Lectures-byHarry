/* Use of fputc */

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("write.txt", "w");
    // ptr = fopen("write.txt", "a"); // append
    fputc('c', ptr);
    fclose(ptr);
    return 0;
}