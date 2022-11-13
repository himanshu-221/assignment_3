/*Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character*/
#include<stdio.h>
int main()
{
    char ch;
    printf("enter a charecter\n");
    scanf("%c",&ch);
    if((ch>=65) && (ch<=90))
    {
        printf("%c is a upper case letter",ch);
    }
    else if((ch >= 97) && (ch <= 122))
    {
        printf("%c is a lower case letter ",ch);
    }
    else if((ch >= 32) && (ch <= 47) ||(ch >= 58) && (ch <= 64))
    {
        printf("%c is special a charecter",ch);
    }
    else{
        printf("%c is a digit",ch);
    }
    return 0;
}