/*

Write a C program for increment and decrement operator in C .

*/

#include <stdio.h>

int main()
{
    int i, limit;

    printf("Enter Limit : ");
    scanf("%d", &limit);

    printf("Printing All Positive Number till %d => \n", limit);

    for (i = 1; i <= limit; i++)
    {
        printf("%d  ", i);
    }

    printf("\n");

    printf("Printing All Positive Number from %d => \n", limit);

    for (i = limit; i >= 1; i--)
    {
        printf("%d  ", i);
    }

    return 0;
}