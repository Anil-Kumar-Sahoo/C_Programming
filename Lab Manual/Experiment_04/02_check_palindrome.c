/*

Write a C program to reverse a Number and check the number is Palindrome or not .

*/

#include <stdio.h>

int main()
{
    int num, reverse = 0, orgNum;

    printf("Enter Any Number : ");
    scanf("%d", &num);

    orgNum = num;

    while (num != 0)
    {
        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }

    printf("Reverse Number of %d is : %d \n", orgNum, reverse);

    if (orgNum == reverse)
    {
        printf("%d is A Palindrome Number\n", orgNum);
    }

    else
    {
        printf("%d is Not A Palindrome Number\n", orgNum);
    }

    return 0;
}