/**Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/

#include<stdio.h>
int main()
{
    int un;
    float un1,un2,un3,un4,un5,su,total;
    un1=un2=un3=un4=un5=0.00;

    printf("\n Enter the total Units: \n");
    scanf("%d",&un);

    if(un<=50 && un>0)
    {
        un1=un*0.50;
    }
    else if(un<=150 && un>50)
    {
        un1=50*0.50;
        un2=(un-50)*0.75;
    }
    else if(un<=250 && un>150)
    {
        un1=50*0.50;
        un2=100*0.75;
        un3=(un-150)*1.20;
    }
    else
    {
        un1=50*0.50;
        un2=100*0.75;
        un3=100*1.20;
        un4=(un-250)*1.50;
    }

    un5=un1+un2+un3+un4;
    su=un5*0.20;
    total=un5+su;

    printf("\n Electricity Bill is Rs. %0.2f \n",total);

    return 0;
}
