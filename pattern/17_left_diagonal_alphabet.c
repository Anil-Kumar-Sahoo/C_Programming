/*

A B C D E F
B C D E F
C D E F
D E F
E F
F

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
            printf("%C ", j + 64);
        }
        printf("\n");
    }

    return 0;
}