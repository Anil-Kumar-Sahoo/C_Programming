/*

C program to find LCM of any two numbers

*/

#include <stdio.h>

int main()
{
    int num1, num2, max, lcm;

    printf("Enter First Number : ");
    scanf("%d", &num1);

    printf("Enter Second Number : ");
    scanf("%d", &num2);

    max = (num1 > num2) ? num1 : num2;

    for (int i = max; i <= num1 * num2; i += max)
    {
        if (i % num1 == 0 && i % num2 == 0)
        {
            lcm = i;
            break;
        }
    }

    printf("The LCM of %d and %d is : %d\n", num1, num2, lcm);

    return 0;
}