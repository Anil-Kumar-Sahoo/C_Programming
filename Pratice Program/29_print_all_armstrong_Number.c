#include <stdio.h>
#include <math.h>

int main()
{
    int limit, rem;

    printf("Enter Limit : ");
    scanf("%d", &limit);

    printf("Armstrong Number Between 1 to %d are => ", limit);

    for (int num = 1; num <= limit; num++)
    {
        int sum = 0;
        int orgNum = num;
        int digit = log10(num) + 1;

        while (orgNum != 0)
        {
            rem = orgNum % 10;

            sum += ceil(pow(rem, digit));

            orgNum /= 10;
        }

        if (num == sum)
        {
            printf("%d  ", num);
        }
    }

    return 0;
}