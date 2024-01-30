/*

C program to print all prime numbers between 1 to n

*/

#include <stdio.h>

int main()
{
    int end, num;

    printf("Enter The Limit to Check Prime Number : ");
    scanf("%d", &end);

    printf("Prime Number Between 1 to %d are : ", end);

    for (num = 1; num <= end; num++)
    {
        int count = 0;

        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d ", num);
        }
    }

    return 0;
}