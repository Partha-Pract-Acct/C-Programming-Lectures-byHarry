/* Write a program to illustrate use of arrow operator -> in C */

#include <stdio.h>

typedef struct emp
{
    int salary;
    float score;
} Employee;

int main()
{
    Employee e1;
    Employee *ptr = &e1;
    ptr->salary = 56000;
    ptr->score = 45.33;

    // (*ptr).salary = 56000;
    // (*ptr).score = 45.33;

    printf("The value of salary is %d and the value of score is %.3f \n", ptr->salary, ptr->score);
    return 0;
}