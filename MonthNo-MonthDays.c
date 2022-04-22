/** Month No. TO Month Days */

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the month no.\n");
    scanf("%d",&a);
    b=31;

    if(a==1)
    {
        printf("No of days are: %d",b);
    }
    else if(a==2)
    {
        c=b-3;
        printf("No of days are: %d",c);
    }
    else if(a==3)
    {
        printf("No of days are: %d",b);
    }
    else if(a==4)
    {
        c=b-1;
        printf("No of days are: %d",c);
    }
    else if(a==5)
    {
        printf("No of days are: %d",b);
    }
    else if(a==6)
    {
        c=b-1;
        printf("No of days are: %d",c);
    }
    else if(a==7)
    {
        printf("No of days are: %d",b);
    }
    else if(a==8)
    {
        printf("No of days are: %d",b);
    }
    else if(a==9)
    {
        c=b-1;
        printf("No of days are: %d",c);
    }
    else if(a==10)
    {
        printf("No of days are: %d",b);
    }
    else if(a==11)
    {
        c=b-1;
        printf("No of days are: %d",c);
    }
    else if(a==12)
    {
        printf("No of days are: %d",b);
    }
    else
    {
        printf("Invalid Month no.");
    }

    return 0;
}
