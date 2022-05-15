#include<stdio.h>

#define MAX 50

void read_array(int *, int );
void Small_Large(int *, int);

int main()
{
    int a[MAX];
    int n;

    printf("Enter the range of the Array : ");
    scanf("%d",&n);

    read_array(a,n);

    Small_Large(a,n);

    return 0;
}

void read_array(int *x, int n)
{
    printf("\nEnter the Elements of the Array : \n");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
}

void Small_Large(int *x, int n)
{
    int large = x[0];
    int small = x[0];


    for(int i=0; i<n; i++)
    {
        if(x[i] > large)
        {
            large = x[i];
        }
        if(x[i] < small)
        {
            small = x[i];
        }
    }

    printf("\nLargest is %d and Smallest is %d\n\n",large,small);
}
