#include <stdio.h>

int main()
{
    int num, orgNum, rem, fact, sum = 0;

    printf("Enter Any Number to Check Strong Number : ");
    scanf("%d", &num);

    orgNum = num;

    while (num != 0)
    {
        rem = num % 10;

        fact = 1;

        for (int i = 1; i <= rem; i++)
        {
            fact *= i;
        }

        sum += fact;

        num = num / 10;
    }

    if (orgNum == sum)
    {
        printf("%d is A Strong Number.\n", orgNum);
    }

    else
    {
        printf("%d is Not A Strong Number.\n", orgNum);
    }

    return 0;
}