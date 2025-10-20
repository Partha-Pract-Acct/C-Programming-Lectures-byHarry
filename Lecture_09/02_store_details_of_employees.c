/* Write a program to store the details of 3 employees from user defined data. Use the structure declared above */

#include <stdio.h>
#include <string.h>

struct employee
{
    char name[10];
    int code;
    float salary;
};

int main()
{
    struct employee e1, e2, e3;

    printf("Enter your name:\n");
    scanf("%s", &e1.name);
    printf("Enter the value of code:\n");
    scanf("%d", &e1.code);
    printf("Enter the value of salary:\n");
    scanf("%f", &e1.salary);
    printf("%s %d %f\n", e1.name, e1.code, e1.salary);

    printf("Enter your name:\n");
    scanf("%s", &e2.name);
    printf("Enter the value of code:\n");
    scanf("%d", &e2.code);
    printf("Enter the value of salary:\n");
    scanf("%f", &e2.salary);
    printf("%s %d %f\n", e2.name, e2.code, e2.salary);

    printf("Enter your name:\n");
    scanf("%s", &e3.name);
    printf("Enter the value of code:\n");
    scanf("%d", &e3.code);
    printf("Enter the value of salary:\n");
    scanf("%f", &e3.salary);
    printf("%s %d %f\n", e3.name, e3.code, e3.salary);

    return 0;
}