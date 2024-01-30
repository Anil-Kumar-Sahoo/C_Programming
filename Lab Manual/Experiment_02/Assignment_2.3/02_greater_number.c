/*

Write a C Program to find the grater out of two numbers using Ternary Operator .

*/

#include <stdio.h>

int main()
{
    int num1, num2, max;

    printf("Enter First Number : ");
    scanf("%d", &num1);

    printf("Enter Second Number : ");
    scanf("%d", &num2);

    max = (num1 > num2) ? num1 : num2;

    printf("Greatest Number is : %d", max);

    return 0;
}