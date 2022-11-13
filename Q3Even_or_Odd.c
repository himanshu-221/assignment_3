#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number:\n");
    scanf("%d",&x);
    if(x%2==0)
    printf("%d number is Even",x);
    else{
        printf("%d is Odd",x);
    }
    return 0;
}