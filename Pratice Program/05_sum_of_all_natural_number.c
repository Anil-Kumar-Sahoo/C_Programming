/*

C program to find sum of natural number between 1 to n .

*/

#include <stdio.h>

int main()
{
    int limit, i, sum = 0;

    printf("Enter The Number You Want to Stop : ");
    scanf("%d", &limit);

    for (i = 1; i <= limit; i++)
    {
        sum += i;
        }

    printf("The Sum of all Numbers between 1 and %d is : %d", limit, sum);

    return 0;
}