#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter two numbers to check greater\n");
    scanf("%d %d",&x,&y);


        // ternery operation giving wrong output
    // (x>y)?(x==y)?printf("%d is greater",x):printf("%d is greater",y):printf("number is equal\n");
    
    if(x>y)
    {
        printf("%d is greater\n",x);
    }
    else if(x==y)
    {
        printf("%d and %d is equal",x,y);
    }
    else if(x<y){
        printf("%d is greater\n",y);
    }
    else{
        printf("Please enter a valid number!");
    }
    return 0;
}