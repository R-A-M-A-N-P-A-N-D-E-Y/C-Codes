/**  No Of Notes You Need*/

#include<stdio.h>
int main()
{
    int a;
    int b,c,d,e,f,g,h,i,j,k;
    b=c=d=e=f=g=h=i=j=k=0;
    printf("Enter your amount\n");
    scanf("%d",&a);

    if(a>=2000)
    {
        b=a/2000;
        a=a-(b*2000);
    }
    if(a>=500)
    {
        c=a/500;
        a=a-(c*500);
    }
    if(a>=200)
    {
        d=a/200;
        a=a-(d*200);
    }
    if(a>=100)
    {
        e=a/100;
        a=a-(e*100);
    }
    if(a>=50)
    {
        f=a/50;
        a=a-(f*50);
    }
    if(a>=20)
    {
        g=a/20;
        a=a-(g*20);
    }
    if(a>=10)
    {
        h=a/10;
        a=a-(h*10);
    }
    if(a>=5)
    {
        k=a/5;
        a=a-(k*5);
    }
    if(a>=2)
    {
        i=a/2;
        a=a-(i*2);
    }
    if(a>=1)
    {
        j=a/1;
        a=a-(j*1);
    }
    else if(a<1)
    {
        printf("Enter Valid Amount.\n");
    }

    printf("Total no. of notes are: \n");
    printf("2000 = %d\n",b);
    printf("500 = %d\n",c);
    printf("200 = %d\n",d);
    printf("100 = %d\n",e);
    printf("50 = %d\n",f);
    printf("20 = %d\n",g);
    printf("10 = %d\n",h);
    printf("5 = %d\n",k);
    printf("2 = %d\n",i);
    printf("1 = %d\n",j);

  return 0;
}
