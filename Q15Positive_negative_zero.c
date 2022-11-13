/*Write a program to check whether a given number is positive, negative or zero*/
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num>0)
    {
        printf("%d is positive number",num);
    }
    else if(num < 0)
    {
        printf("%d is negative number",num);
    }
    else{
        printf("%d is equal to 0",num);
    }
    return 0;
}