/*

A B C D E F
A B C D E
A B C D
A B C
A B
A

*/

#include <stdio.h>

int main()
{
    int i, j, num;

    printf("Enter Number : ");
    scanf("%d", &num);

    for (i = num; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)

        {
            printf("%C ", j + 64);
        }
        printf("\n");
    }

    return 0;
}