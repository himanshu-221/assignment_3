
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x>99 && x<1000)
    printf("%d is three digit number",x);
    else{
        printf("Entered number is not a three digit number");
    }
    return 0;
}