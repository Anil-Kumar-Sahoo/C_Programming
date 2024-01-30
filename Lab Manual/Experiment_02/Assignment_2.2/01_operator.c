/*

Write a C Program to Implement all relational and logical Operator in C .

*/

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter First Number : ");
    scanf("%d", &num1);

    printf("Enter Second Number : ");
    scanf("%d", &num2);

    // Relational Operators

    printf("Relational Operators =>\n");

    printf("%d < %d = %d \n", num1, num2, num1 < num2);
    printf("%d <= %d = %d \n", num1, num2, num1 <= num2);
    printf("%d > %d = %d \n", num1, num2, num1 > num2);
    printf("%d >= %d = %d \n", num1, num2, num1 >= num2);
    printf("%d == %d = %d \n", num1, num2, num1 == num2);
    printf("%d != %d = %d \n", num1, num2, num1 != num2);

    // Logical operators

    printf("Logical Operators =>\n");

    printf("%d && %d = %d \n", num1, num2, num1 && num2);
    printf("%d || %d = %d \n", num1, num2, num1 || num2);
    printf("!(%d) = %d \n", num1, !num1);

    return 0;
}