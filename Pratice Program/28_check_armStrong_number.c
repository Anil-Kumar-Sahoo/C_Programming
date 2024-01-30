/*

C program to check Armstrong number.

*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num, digit, orgNum, rem, sum = 0;

    printf("Enter Number : ");
    scanf("%d", &num);

    orgNum = num;

    digit = log10(num) + 1;

    while (num != 0)
    {
        rem = num % 10;

        sum += round(pow(rem, digit));

        num /= 10;
    }

    if (sum == orgNum)
    {
        printf("%d is An Armstrong Number.", orgNum);
    }

    else
    {
        printf("%d is Not An Armstrong Number.", orgNum);
    }

    return 0;
}