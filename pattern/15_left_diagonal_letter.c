/*


A
B A
C B A
D C B A
E D C B A
F E D C B A


*/

#include <stdio.h>

int main()
{
    int i, j, num;

    printf("Enter Number : ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        for (j = i; j >= 1; j--)

        {
            printf("%C ", j + 64);
        }
        printf("\n");
    }

    return 0;
}