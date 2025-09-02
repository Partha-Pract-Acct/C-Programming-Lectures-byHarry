/* Write a program using recursion in calculate nth element of fibonacci series */

#include <stdio.h>

int fibonacci(int);

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int a = 5;
    printf("The value of fibonacci series at %d is %d", a, fibonacci(a));
    return 0;
}