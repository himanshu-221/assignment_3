/* Write a program to check whether a given alphabet is in uppercase or lowercase*/

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a charecter\n");
    scanf("%c",&ch);
    if((ch>=97) && (ch <= 122))
    {
        printf("%c is a lower case latter",ch);
    }
    else if((ch >= 65) && (ch <= 90))
    {
        printf("%c is upper case letter",ch);
    }
    else{
        printf("please enter a valid charecter");
    }
    return 0;
}