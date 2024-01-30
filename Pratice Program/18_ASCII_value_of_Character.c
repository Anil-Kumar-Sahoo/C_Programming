/*

C program to print the ASCII value of Given Character .

*/

#include <stdio.h>

int main()
{
    char ch;

    printf("Enter any Character : ");
    scanf("%c", &ch);

    printf("The ASCII value of %c is : %d", ch, ch);

    return 0;
}