/* Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.
*/

#include<stdio.h>
#include<math.h>
int main()
{
    int cost,selling,profit,percentage;
    printf("Enter cost price\n");
    scanf("%d",&cost);
    printf("Enter selling price\n");
    scanf("%d",&selling);
    // profit = selling price - cost price
    // loss = cost price - selling price
    profit = selling - cost;
    if(profit > 0)
    {
        printf("%d profit\n",profit);
    }
    else{
        printf("%d loss\n",profit);
    }
    percentage = profit*100/cost;
    printf("profit and loss percentage %d%%",percentage);
    return 0;
}