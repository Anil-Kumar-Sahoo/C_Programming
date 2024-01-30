/*

1
1 3
1 3 5
1 3 5 7
1 3 5 7 9

*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter Number : ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", 2 * j + 1);
        }
        printf("\n");
    }

    return 0;
}