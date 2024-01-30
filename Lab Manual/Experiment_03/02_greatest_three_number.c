/*

Write a C Program to find the Greatest of Three Number .

*/

#include <stdio.h>

int main()
{
    int num1, num2, num3, max;

    printf("Enter First Number : ");
    scanf("%d", &num1);

    printf("Enter Second Number : ");
    scanf("%d", &num2);

    printf("Enter Third Number : ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        max = num1;
    }

    else if (num2 > num1 && num2 > num3)
    {
        max = num2;
    }

    else
    {
        max = num3;
    }

    printf("Greatest Number is : %d ", max);

    return 0;
}