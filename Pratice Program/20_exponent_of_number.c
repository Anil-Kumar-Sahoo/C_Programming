/*

C program to find power of any number using for loop

*/

#include <stdio.h>

int main()
{
    int num, pow, res = 1;

    printf("Enter Number : ");
    scanf("%d", &num);

    printf("Enter Power : ");
    scanf("%d", &pow);

    for (int i = 0; i < pow; i++)
    {
        res *= num;
    }

    printf("%d ^ %d = %d", num, pow, res);

    return 0;
}