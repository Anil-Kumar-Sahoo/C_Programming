/*

C program to count the number of digit a Given N .

*/

#include <stdio.h>

int main()
{
    int num, count = 0, orgNum;

    printf("Enter Number : ");
    scanf("%d", &num);

    orgNum = num;

    while (num != 0)
    {
        count++;
        num /= 10;
    }

    printf("The number of digits of %d is : %d", orgNum, count);

    return 0;
}