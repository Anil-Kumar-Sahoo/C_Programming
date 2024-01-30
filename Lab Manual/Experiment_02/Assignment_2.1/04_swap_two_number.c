/*

Write a C program to Swap Two Number without using Third variable .

*/

// ===================================================================================

#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter The Value of X : ");
    scanf("%d", &x);

    printf("Enter The Value of Y : ");
    scanf("%d", &y);

    printf("Before Swap :  X = %d & Y = %d \n", x, y);

    x = x + y;
    y = x - y;
    x = x - y;

    printf("After Swap  :  X = %d & Y = %d \n", x, y);

    return 0;
}

// ===================================================================================

//                                    OR

// ===================================================================================

/*
#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter The Value of X : ");
    scanf("%d", &x);

    printf("Enter The Value of Y : ");
    scanf("%d", &y);

    printf("Before Swap :  X = %d & Y = %d \n", x, y);

    x = x * y;
    y = x / y;
    x = x / y;

    printf("After Swap  :  X = %d & Y = %d \n", x, y);

    return 0;
}

*/

// ===================================================================================
