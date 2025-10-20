/* Pointer to string */

#include <stdio.h>

struct employee
{
    int code;
    float salary;
    char name;
};

int main()
{
    struct employee e1;
    e1.code = 56;
    struct employee *ptr;
    ptr = &e1;

    printf("%d\n", (*ptr).code); // pointer to structures
    printf("%d", ptr->code);     // arrow operator
    return 0;
}