/*
6 5 4 3 2 1
6 5 4 3 2
6 5 4 3
6 5 4
6 5
6

*/

#include <stdio.h>

int main()
{
    int i, j, num;

    printf("Enter Number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = num; j >= i; j--)

        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}