/*

1 2 3 4 5 6
2 3 4 5 6
3 4 5 6
4 5 6
5 6
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
        for (j = i; j <= num; j++)

        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}