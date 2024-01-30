/*

C program to check a Number Prime or Not .

*/

#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter Number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }

    if (count == 2)
    {
        printf("%d is a Prime Number", num);
    }

    else
    {
        printf("%d is Not a Prime Number", num);
    }

    return 0;
}