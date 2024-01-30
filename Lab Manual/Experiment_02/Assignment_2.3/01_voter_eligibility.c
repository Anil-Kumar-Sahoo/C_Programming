/*

Write a C program for Conditional / Ternary Operators in C .

*/

#include <stdio.h>

int main()
{
    int age;

    printf("Enter Your Age : ");
    scanf("%d", &age);

    (age >= 18) ? printf("You Can Vote .") : printf("You Cann't Vote .");

    return 0;
}