/*

F
F E
F E D
F E D C
F E D C B
F E D C B A

*/

#include <stdio.h>

int main()
{
    int i, j, num;

    printf("Enter Number : ");
    scanf("%d", &num);

    for (i = num; i >= 1; i--)
    {
        for (j = num; j >= i; j--)

        {
            printf("%C ", j + 64);
        }
        printf("\n");
    }

    return 0;
}