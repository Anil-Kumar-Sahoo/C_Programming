/*

C program to find sum of prime numbers between 1 to n

*/

#include <stdio.h>

int main()
{
    int end, num, sum = 0;

    printf("Enter The Limit You Want to Calculate sum of prime numbers : ");
    scanf("%d", &end);

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
            sum += num;
        }
    }
    printf("The sum of all prime numbers is : %d ", sum);
    return 0;
}