/*

C program to find HCF of two numbers .

*/

#include <stdio.h>

int main()
{
    int num1, num2, hcf, min;

    printf("Enter First Number : ");
    scanf("%d", &num1);

    printf("Enter Second Number : ");
    scanf("%d", &num2);

    min = (num1 < num2) ? num1 : num2;

    for (int i = 1; i <= min; i++)
    {

        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is : %d \n", num1, num2, hcf);

    return 0;
}