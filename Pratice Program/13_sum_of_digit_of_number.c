/*

C program to find the sum of all digit of a given Number .

*/

#include <stdio.h>

int main()
{
    int num, rem, sum = 0, orgNum;

    printf("Enter A Number : ");
    scanf("%d", &num);

    orgNum = num;

    while (num != 0)
    {
        rem = num % 10;

        sum += rem;

        num /= 10;
    }

    printf("The sum of all digit of %d is : %d\n", orgNum, sum);

    return 0;
}