/*

C program to find sum of first digit and Last digit of a Given Number .

*/

#include <stdio.h>

int main()
{
    int num, lastNum, firstNum;

    printf("Enter Number : ");
    scanf("%d", &num);

    lastNum = num % 10;

    firstNum = num;

    while (firstNum >= 10)
    {
        firstNum /= 10;
    }

    printf("Sum of First digit ( %d ) and Last digit ( %d ) is : %d \n", firstNum, lastNum, firstNum + lastNum);

    return 0;
}