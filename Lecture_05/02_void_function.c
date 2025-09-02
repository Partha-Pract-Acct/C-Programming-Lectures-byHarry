/* Write a program with three functions
    1. Good Morning function which prints "good morning!"
    2. Good Afternoon function which prints "good afternoon!"
    3. Good Evening function which prints "good evening!"
main() should call all of these in order 1 -> 2 -> 3 */

#include <stdio.h>

void Good_Morning();
void Good_Afternoon();
void Good_Evening();

void Good_Morning()
{
    printf("good morning!\n");
}

void Good_Afternoon()
{
    printf("good afternoon!\n");
}

void Good_Evening()
{
    printf("good evening!\n");
}
int main()
{
    Good_Morning();
    Good_Afternoon();
    Good_Evening();
    return 0;
}