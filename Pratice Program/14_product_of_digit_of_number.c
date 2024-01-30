/*

C program to find product of Each digit a Given Number .

*/

#include <stdio.h>

int main()
{
    int num, rem, product = 1, orgNum;

    printf("Enter A Number : ");
    scanf("%d", &num);

    orgNum = num;

    while (num != 0)
    {
        rem = num % 10;

        product *= rem;

        num /= 10;
    }

    printf("The product of all digit of %d is : %d\n", orgNum, product);

    return 0;
}