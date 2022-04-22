/**profit or loss */

#include<stdio.h>
int main()
{
    int SP,CP,Profit,Loss;
    printf("\nEnter the Cost price:\n");
    scanf("%d",&CP);
    printf("\n Enter the Selling price:\n");
    scanf("%d",&SP);

    if(SP>CP)
    {
        Profit = SP - CP;
        printf("\n Profit is : %d\n",Profit);
    }
    else if(CP>SP)
    {
        Loss = (SP - CP)*(-1);
        printf("\n Loss is : %d\n",Loss);
    }
    else
    {
        printf("\n Nor the Profit , Nor the Loss. \n");
    }

    return 0;
}
