/*

C program to print the sum of all odd Number for 1 to n .

*/

#include <stdio.h>

int main()
{
    int limit, i, sum = 0;

    printf("Enter The Number You Want to Stop : ");
    scanf("%d", &limit);

    for (i = 1; i <= limit; i += 2)
    {
        sum += i;
    }

    printf("The Sum of all Odd Numbers between 1 and %d is : %d", limit, sum);

    return 0;
}