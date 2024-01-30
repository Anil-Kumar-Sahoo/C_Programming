/*

write a C program to find bonus as 4000 if salary is more than 25000 and experience is more than 5 year otherwise bonus is 2000 .

*/

#include <stdio.h>

int main()
{
    int salary, experience;

    printf("Enter Your Base Salary : ");
    scanf("%d", &salary);

    printf("Enter Your Experience : ");
    scanf("%d", &experience);

    if (salary > 25000 && experience > 5)
    {
        printf("Your Net Salary is : %d", salary + 4000);
    }
    else
    {
        printf("Your Net Salary is : %d", salary + 2000);
    }
    return 0;
}