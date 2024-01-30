/*

C program to find the first digit a given Number .

*/

#include <stdio.h>

int main()
{
    int num, orgNum;

    printf("Enter Number :");
    scanf("%d", &num);

    orgNum = num;

    while (num >= 10)
    {

        num /= 10;
    }

    printf("First Digit of %d is %d", orgNum, num);

    return 0;
}