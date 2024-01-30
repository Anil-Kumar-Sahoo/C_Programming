/*

C program to find reverse of a Number .

*/

#include <stdio.h>

int main()
{
    int num, reverse = 0, rem, orgNum;

    printf("Enter A Number : ");
    scanf("%d", &num);

    orgNum = num;

    while (num != 0)
    {
        rem = num % 10;

        reverse = (reverse * 10) + rem;

        num /= 10;
    }

    printf("Reverse Number of %d is : %d", orgNum, reverse);

    return 0;
}