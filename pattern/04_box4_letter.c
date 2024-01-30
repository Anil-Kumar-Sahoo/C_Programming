/*

A B C D E F
A B C D E F
A B C D E F
A B C D E F
A B C D E F

*/

#include <stdio.h>

int main()
{
    int i, j, row, col;

    printf("Enter Row : ");
    scanf("%d", &row);

    printf("Enter Column : ");
    scanf("%d", &col);

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            printf("%c ", j + 64);
        }
        printf("\n");
    }

    return 0;
}