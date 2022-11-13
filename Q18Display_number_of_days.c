/*Write a program which takes the month number as an input and display number of
days in that month*/
#include<stdio.h>
int main()
{
    int month,year;
    printf("enter year\n");
    scanf("%d",&year);
    printf("enter a month between (1-12)\n");
    scanf("%d",&month);

    switch (month)
    {
    case 1 : printf("31 days");
        break;
    case 2 : if(((year%4==0) && (year%100 != 0)) || (year%400==0))
        printf("29 days");
    else
        printf("28 days");
        break;
    case 3 : printf("31 days");
        break;
    case 4 : printf("30 days");
        break;
    case 5 : printf("31 days");
        break;
    case 6 : printf("30 days");
        break;
    case 7 : printf("31 days");
        break;
    case 8 : printf("31 days");
        break;
    case 9 : printf("30 days");
        break;
    case 10 : printf("31 days");
        break;
    case 11 : printf("30 days");
        break;
    case 12 : printf("31 days");
        break;
    }
    return 0;
}