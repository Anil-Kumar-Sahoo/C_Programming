/*

A
A B
A B C
A B C D
A B C D E
A B C D E F

*/

#include <stdio.h>

int main()
{
    int i, j, row;

    printf("Enter Row : ");
    scanf("%d", &row);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)

        {
            printf("%C ", j + 64);
        }
        printf("\n");
    }

    return 0;
}