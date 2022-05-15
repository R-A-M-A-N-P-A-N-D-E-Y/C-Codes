/** Triangle is Valid Or Not By Side*/

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter the sides of the Triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    d=a+b;
    e=b+c;
    f=c+a;

    if(d>c && e>a && f>b)
    {
        printf("The Triangle is Valid\n");
    }
    else
    {
        printf("The Triangle is not possible\n");
    }

    return 0;
}
