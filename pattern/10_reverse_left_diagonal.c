/*
 IMPORTANT.........!

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1

*/

#include <stdio.h>

int main()
{
    int i, j, row;

    printf("Enter Row : ");
    scanf("%d", &row);

    for (i = row; i >= 1; i--)
    {
        for (j = row; j >= i; j--)

        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}