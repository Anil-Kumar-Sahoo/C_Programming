/*

F E D C B A
E D C B A
D C B A
C B A
B A
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
        for (j = i; j >= 1; j--)

        {
            printf("%C ", j + 64);
        }
        printf("\n");
    }

    return 0;
}