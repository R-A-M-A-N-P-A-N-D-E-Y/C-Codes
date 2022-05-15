/** Valid Triangle Or Not By Angles */

#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the angles:\n");
    scanf("%d%d%d",&a,&b,&c);
    d=a+b+c;

    if(d<180)
    {
        printf("The Triangle is not possible.");
    }
    else if(d==180)
    {
        printf("The Triangle is valid");
    }
    else
    {
        printf("The Triangle is not possible.");
    }

    return 0;

}
