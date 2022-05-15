/** Week No To Week Day  */

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the week no.\n");
    scanf("%d",&a);

    if(a==1)
    {
        printf("Monday");
    }
    if(a==2)
    {
        printf("Tuesday");
    }
    if(a==3)
    {
        printf("Wednesday");
    }
    if(a==4)
    {
        printf("Thursday");
    }
    if(a==5)
    {
        printf("Friday");
    }
    if(a==6)
    {
        printf("Saturday");
    }
    if(a==7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Enter valid week no.");
    }

    return 0;
}
