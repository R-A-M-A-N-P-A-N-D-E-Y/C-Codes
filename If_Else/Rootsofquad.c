/**roots of quadratic equations:*/

#include<stdio.h>
int main()
{
    int a,b,c;
    float d,e,f,g,h;
    printf("\nEnter the value of a: \n");
    scanf("%d",&a);
    printf("\nEnter the value of b: \n");
    scanf("%d",&b);
    printf("\nEnter the value of c: \n");
    scanf("%d",&c);

    f=(b*b)-(4.0*(a*c));
    printf("\n%0.2f\n",f);

    if(f>0)
    {
        d= (-(b)+ sqrt(f))/2*a;
        e= (-(b)- sqrt(f))/2*a;
        printf("\n The Roots Of The Equation Are: %0.2f And %0.2f \n",d,e);
    }
    else if(f<0)
    {
        d= -(b)/(2*a);
        e= sqrt(-f)/(2*a);
        printf("\n The Roots Of The Equation Are: %0.2f + i%0.2f And %0.2f - i%0.2f \n",d,e,d,e);
    }
    else
    {
        d= -(b)/(2*a);
        printf("\n The Root Of The Equation Is: %0.2f \n",d);
    }

    return 0;
}
