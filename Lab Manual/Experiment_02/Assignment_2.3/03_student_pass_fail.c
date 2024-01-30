/*

Write a C program to find a student is "Passed" or "Failed" using Ternary operator after entering 3 subject marks .

*/

#include <stdio.h>

int main()
{
    int mark1, mark2, mark3;

    printf("Enter Mark of First Subject : ");
    scanf("%d", &mark1);

    printf("Enter Mark of Second Subject : ");
    scanf("%d", &mark2);

    printf("Enter Mark of Third Subject : ");
    scanf("%d", &mark3);

    (mark1 >= 30 && mark2 >= 30 && mark3 >= 30) ? printf("You are Passed .") : printf("You are Failed .");

    return 0;
}