/*

Write a C program to find the area of a rectangle .

*/

#include <stdio.h>

int main()
{
    int length, breadth, area;

    printf("Enter Length of Rectangle : ");
    scanf("%d", &length);

    printf("Enter Breadth of Rectangle : ");
    scanf("%d", &breadth);

    area = length * breadth;

    printf("The Area of The Rectangle is : %d ", area);

    return 0;
}