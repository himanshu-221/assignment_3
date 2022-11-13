//Write a program to check whether a given year is a leap year or not.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year to check leap year\n");
    scanf("%d",&year);
    if(((year%4==0) && (year%100 != 0)) || (year%400==0))
    {
        printf("%d is a Leap year",year);
    }
    else{
        printf("%d is Not a leap year",year);
    }
    return 0;
}