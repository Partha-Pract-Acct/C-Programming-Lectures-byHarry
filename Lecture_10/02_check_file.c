/* Modify the program above to check whether the file exists or not before opening the file */

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("partha.txt", "r"); // result will be "valid"
    // ptr = fopen("partha2.txt", "r");  // result will be "The file doesn't exist sorry!""
    int num;

    if (ptr == NULL)
    {
        printf("The file doesn't exist sorry!");
    }
    else
    {
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num);

        fscanf(ptr, "%d", &num);
        printf("The value of num is %d \n", num);
    }
    fclose(ptr); // to close file

    return 0;
}