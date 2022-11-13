/* Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/
// Discriminant = b^2 - 4ac
#include<stdio.h>

int main()
{
    double a,b,c,discriminant=0;
    printf("Enter the values of cofficient a,b,c\n");
    scanf("%lf %lf %lf",&a,&b,&c);
    discriminant = b*b + 4*a*c;
    if(discriminant>0)
    {
        printf("Roots are real and distinct");
    }
    else if(discriminant == 0)
    {
        printf("Roots are real and equal");
    }
    else{
        printf("Roots are imaginary");
    }
    return 0;
}