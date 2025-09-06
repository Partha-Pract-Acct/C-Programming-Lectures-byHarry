/* Write a program to change the value of a variable to ten times of its current value. Write a function and pass the value by reference */

#include <stdio.h>

void change_to_ten_times(int *a)
{
    *a = *a * 10;
}
int main()
{
    int i = 45;
    printf("The value of i is %d\n", i);
    change_to_ten_times(&i);
    printf("The value of i after change is %d\n", i);
    return 0;
}