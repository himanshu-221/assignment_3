/* Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times*/
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    
    if((num1==num2)||(num2==num3)||(num3==num1))
    {
        printf("numbers are equal %d,%d,%d",num1,num2,num3);
    }
    else if((num1>num2) && (num1>num3))
    {
        printf("%d is greater",num1);
    }
    else if((num2>num1) && (num2>num3))
    {
        printf("%d is greater",num2);
    }
    else{
        printf("%d is greater",num3);
    }
    
    return 0;
    
}