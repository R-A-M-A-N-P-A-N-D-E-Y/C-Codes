#include<stdio.h>

void scan(int *x, int n);
void print(int *x, int n);

int main()
{
    int n;

    printf("Enter range if the array : ");
    scanf("%d",&n);

    int a[n];

    scan(a,n);
    print(a,n);

    printf("\n\n");

    return 0;
}

void scan(int *x, int n)
{
    printf("\n");
    for(int i=0; i<n; i++)
    {
        printf("Enter element a[%d] : ",i);
        scanf("%d",&x[i]);
    }
}

void print(int *x, int n)
{
    printf("\nEntered Elements are : \n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t",x[i]);
    }
}
