#include <stdio.h>

int main()
{
    int term, a, b, c;

    printf("Enter Term you want to print in Fibonacci Series : ");
    scanf("%d", &term);

    printf("Fibonacci Terms are => \n");

    a = 0;
    b = 1;
    c = 0;

    for (int i = 0; i < term; i++)
    {
        printf("%d  ", c);

        a = b;
        b = c;
        c = a + b;
    }

    return 0;
}