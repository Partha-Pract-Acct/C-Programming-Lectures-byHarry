/* void show(struct employee e);
    Complete this show function to display the content of employee */

#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
}; // semicolon is important

void show(struct employee e); // function prototype

void show(struct employee e)
{
    printf("Code is %d\nSalary is %f\nName is %s\n", e.code, e.salary, e.name);
}

int main()
{
    struct employee e1;
    e1.code = 4511;
    strcpy(e1.name, "Partha");
    e1.salary = 54.44;
    show(e1);

    return 0;
}