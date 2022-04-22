/**triangle type */

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter the side of Triangle: \n");
    scanf("%d %d %d",&a,&b,&c);

    if((a+b)>c && (b+c)>a && (c+a)>b)
    {
        if((a==b) && (b==c) && (c==a))
        {
            printf("\n It is an Equilateral Triangle.\n");
        }
        else if((a==b) || (b==c) || (c==a))
        {
            printf("\n It is an Isosceles triangle.\n");
        }
        else
        {
            printf("\n It is an Scalene Triangle.\n");
        }
    }
    else
    {
        printf("\n \"Invalid Triangle\" \n");
    }


    return 0;
}
