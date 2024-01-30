/*

F E D C B A
F E D C B
F E D C
F E D
F E
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
        for (j = num; j >= i; j--)

        {
            printf("%C ", j + 64);
        }
        printf("\n");
    }

    return 0;
}