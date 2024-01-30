/*

Write a C Program to display Grade of a student based on BPUT university mark .

*/

#include <stdio.h>

int main()
{
    int mark;

    printf("Enter Your Mark : ");
    scanf("%d", &mark);

    if (mark >= 90 && mark <= 100)
    {
        printf("You have scored 'O' Grade .");
    }

    else if (mark >= 80 && mark < 90)
    {
        printf("You have scored 'E' Grade .");
    }

    else if (mark >= 70 && mark < 80)
    {
        printf("You have scored 'A' Grade .");
    }

    else if (mark >= 60 && mark < 70)
    {
        printf("You have scored 'B' Grade .");
    }

    else if (mark >= 50 && mark < 60)
    {
        printf("You have scored 'C' Grade .");
    }

    else if (mark >= 37 && mark < 50)
    {
        printf("You have scored 'D' Grade .");
    }

    else if (mark >= 0 && mark < 37)
    {
        printf("You have scored 'F' Grade .");
    }

    else
    {
        printf("Invalid Data");
    }

    return 0;
}