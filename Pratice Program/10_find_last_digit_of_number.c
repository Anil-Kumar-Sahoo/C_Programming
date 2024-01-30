/*

C Program to find the Last Digit of a Number .

*/

#include <stdio.h>

int main()
{
    int num, lastDigit;

    printf("Enter Number: ");
    scanf("%d", &num);

    lastDigit = num % 10;

    printf("Last Digit of %d is : %d\n", num, lastDigit);

    return 0;
}