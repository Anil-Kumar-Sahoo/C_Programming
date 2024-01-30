/*

Write a C program to check whether the Number is EVEN or ODD .

*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter Number : ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is an EVEN Number.", num);
    }

    else
    {
        printf("%d is an ODD Number.", num);
    }

    return 0;
}