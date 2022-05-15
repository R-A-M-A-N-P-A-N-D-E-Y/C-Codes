//ELECRICITY BILL
/**
Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill. */

#include<stdio.h>
int main()
{
    int unit;
    float amount,b,f;
    printf("Enter your Unit: \n");
    scanf("%d",&unit);

    if(unit>0 && unit<=50)
    {
        amount=unit*0.50;
    }
    else if(unit>50 && unit<=150)
    {
        amount=25+((unit-50)*0.75);
    }
    else if(unit>150 && unit<=250)
    {
        amount=100+((unit-150)*1.20);
    }
    else if(unit>250)
    {
        amount=220+((unit-250)*1.50);
    }
    else
    {
        printf("Invalid Unit Amount\n");
    }

    f=0.20*amount;
    b=amount+f;
    printf("\n Bill Amount: %0.2f \n",b);

    return 0;
}
