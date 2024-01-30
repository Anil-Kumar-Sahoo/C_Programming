/*

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15


*/

#include <stdio.h>

int main()
{
    int num, k = 65;

    printf("Enter Number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", k++);
        }
        printf("\n");
    }

    return 0;
}