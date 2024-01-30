#include <stdio.h>

int main()
{
    int limit, sum;

    printf("Enter Limit to Print Perfect Number : ");
    scanf("%d", &limit);

    printf("Perfect Number Between 1 to %d are => ", limit);

    for (int num = 1; num <= limit; num++)
    {
        sum = 0;

        for (int i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }

        if (num == sum)
        {
            printf("%d  ", num);
        }
    }

    return 0;
}
