/*

Write a C program to find the sum of individual digit of the Entered Number .

*/

#include <stdio.h>

int main()
{
    int num, rem, orgNum, sum = 0;

    printf("Enter Any Number : ");
    scanf("%d", &num);

    orgNum = num;

    while (num != 0)
    {
        rem = num % 10;
        sum += rem;
        num /= 10;
    }

    printf("Sum of Indivisual digit of %d is : %d", orgNum, sum);

    return 0;
}