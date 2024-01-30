/*

C program to calculate factorial of a Number .

*/

#include <stdio.h>

int main()
{
    int num, i, fact = 1;

    printf("Enter Number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        fact *= i;
    }

    printf("The Factorial of %d is : %d \n", num, fact);

    return 0;
}