#include<stdio.h>

int sum(int *a, int *b, int *res)
{
    *res = *a + *b;

    return (res);
}

int main()
{
    int a,b,ans;
    int *res = NULL;

    printf("Enter the value of a & b : ");
    scanf("%d %d",&a,&b);

    res = sum(&a,&b,&ans);

    printf("\nSum of %d + %d = %d\n\n",a,b,*res);

    return 0;
}

