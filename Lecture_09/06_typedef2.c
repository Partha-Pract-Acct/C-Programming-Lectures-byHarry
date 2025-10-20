/* Use of typedef */

#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} Emp;

int main()
{
    // struct employee e1, e2;
    // typedef struct employee Emp;
    Emp e1;
    Emp *ptr1 = &e1;

    strcpy(e1.name, "Partha");
    e1.code = 1236;
    e1.salary = 5000000;

    printf("%d %f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %f %s", ptr1->code, ptr1->salary, ptr1->name);
    return 0;
}