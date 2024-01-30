/*

1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
6 6 6 6 6

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
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}