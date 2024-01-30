/*

Write a C Program to find area and perimeter of a Circle .

*/

#include <stdio.h>

int main()
{
    int radius;
    float pi = 3.14;

    printf("Enter Radius of Circle : ");
    scanf("%d", &radius);

    printf("Area of The Circle is : %.2f \n", pi * radius * radius);
    printf("Perimeter of The Circle is : %.2f \n", 2 * pi * radius);

    return 0;
}