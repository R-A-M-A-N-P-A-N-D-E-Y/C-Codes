//ATM
#include<stdio.h>
int main()
{
    char choise;
    float balance=10000,amount_entered;
    printf("Enter your choise\n 1.Credit:\n 2.Debit:\n");
    scanf("%c",&choise);
    printf("Enter the amount of credited / debited :\n");
    scanf("%f",&amount_entered);

    switch(choise)
    {
        case'1':balance += amount_entered;
        printf("\n amount credited \n");
        break;
        case'2':balance -= amount_entered;
        printf("\n amount debited \n");
        break;
        default:printf("Invalid Input");
    }

    printf("\n Updated Balance: %0.2f\n",balance);

    return 0;
}
