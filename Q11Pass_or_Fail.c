/*Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/

#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5;
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    float total=s1+s2+s3+s4+s5;
    float percentage= total*100/500;
    printf("___________Report Card___________\n\n");
    printf("Subjects                    marks\n");
    printf("Hindi                      %d\n",s1);
    printf("English                    %d\n",s2);
    printf("Maths                      %d\n",s3);
    printf("Science                    %d\n",s4);
    printf("SST                        %d\n",s5);
    printf("----------------------------------\n");
    printf("Total                      %.2f\n",total);
    if(percentage>33)
    printf("PASS                       %.2f%%",percentage);
    else{
        printf("\nFAIL");
    }
    return 0;
}