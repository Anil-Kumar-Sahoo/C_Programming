/*

C Program to Print ASCII value of all character .

*/

#include <stdio.h>

int main()
{
    for (int i = 0; i <= 255; i++)
    {
        printf("%d = %c \n", i, i);
    }

    return 0;
}