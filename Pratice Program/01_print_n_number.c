/*

C program to print all Natural Number till "n" .

*/

#include <stdio.h>

int main()
{
    int limit, i;

    printf("Enter The Number You Want to Stop : ");
    scanf("%d", &limit);

    for (i = 1; i <= limit; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}