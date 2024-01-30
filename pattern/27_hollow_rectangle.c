/*


* * * * * *
*         *
* * * * * *


*/

#include <stdio.h>

int main()
{
    int row, col;

    printf("Enter Row : ");
    scanf("%d", &row);

    printf("Enter Column : ");
    scanf("%d", &col);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if (i == 1 || i == row || j == col || j == 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}