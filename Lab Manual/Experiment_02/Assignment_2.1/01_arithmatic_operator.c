/*

Write a C Program for arithmetic operator

*/

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter First Number : ");
    scanf("%d", &num1);

    printf("Enter Second Number : ");
    scanf("%d", &num2);

    printf("%d + %d = %d \n", num1, num2, num1 + num2);
    printf("%d - %d = %d \n", num1, num2, num1 - num2);
    printf("%d x %d = %d \n", num1, num2, num1 * num2);
    printf("%d / %d = %d \n", num1, num2, num1 / num2);

    return 0;
}