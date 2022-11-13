/*Write a program to check whether a given number is divisible by 3 and divisible by 2.*/
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if((num % 3 == 0) && (num % 2 == 0))
    {
        printf("%d is divisible by '2' and '3'",num);
    }
    else{
        printf("number is not divisible ");
    }
    return 0;
}