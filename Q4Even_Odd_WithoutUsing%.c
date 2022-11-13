
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);
    if((num & 1) != 1)
        printf("Number is even");
    else
        printf("Number is odd");
    return 0;
}