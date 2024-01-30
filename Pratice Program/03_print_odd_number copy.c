/*

C program to print all odd Number till "n" .

*/
/*

#include <stdio.h>

int main()
{
    int limit, i;

    printf("Enter The Number You Want to Stop : ");
    scanf("%d", &limit);

    for (i = 1; i <= limit; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}

*/

// ============================================================================

//                                  or

// ============================================================================

#include <stdio.h>

int main()
{
    int limit, i;

    printf("Enter The Number You Want to Stop : ");
    scanf("%d", &limit);

    for (i = 1; i <= limit; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}