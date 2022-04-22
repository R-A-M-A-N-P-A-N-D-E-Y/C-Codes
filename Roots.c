//Roots of the equation
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("\n Enter the value a :\n");
    scanf("%d",&a);
    printf("\n Enter the value b :\n");
    scanf("%d",&b);
    printf("\n Enter the value c :\n");
    scanf("%d",&c);

    d=(b*b)-(4*a*c);

    switch(d>0)
    {
    case 1:
        e=((-b)+sqrt(d))/2*a;
        f=((-b)-sqrt(d))/2*a;
        printf("\n The Roots of the equation are %d and %d\n",e,f);

    }

    return 0;
}
