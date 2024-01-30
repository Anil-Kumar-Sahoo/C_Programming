/*

c program to print Natural Number reversely .

*/

#include <stdio.h>

int main()
{
    int limit;

    printf("Enter The Number you want to Start: ");
    scanf("%d", &limit);

    for (int i = limit; i >= 1; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}