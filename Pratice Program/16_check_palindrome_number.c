/*

C program to check Whether a Number is Palindrome or not .

*/

#include <stdio.h>

int main()
{
    int num, rem, reverse = 0, orgNum;

    printf("Enter A Number : ");
    scanf("%d", &num);

    orgNum = num;

    while (num != 0)
    {
        rem = num % 10;
        reverse = (reverse * 10) + rem;
        num /= 10;
    }

    if (orgNum == reverse)
    {
        printf("%d is A Palindrome Number \n", orgNum);
    }

    else
    {
        printf("%d is Not A Palindrome Number \n", orgNum);
    }

    return 0;
}