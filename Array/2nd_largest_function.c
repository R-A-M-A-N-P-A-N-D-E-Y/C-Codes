#include<stdio.h>

#define MAX 50

void read_array(int *, int );

void second_largest_array(int *, int );

int main()
{
    int a[MAX];
    int n;

    printf("Enter the range of the array : ");
    scanf("%d",&n);

    read_array(a,n);

    second_largest_array(a,n);

    return 0;
}

void read_array(int *X, int N)
{
    printf("\nEnter the elements of the array : \n");
    for(int i=0; i<N; i++)
    {
        scanf("%d",&X[i]);
    }
}

void second_largest_array(int *X, int N)
{
    int large = 0;
    int slarge = 0;

    if(X[0] > X[1])
    {
        large = X[0];
        slarge = X[1];
    }
    else
    {
        large = X[1];
        slarge = X[0];
    }

    for(int i=2; i<N; i++)
    {
        if(X[i] > large)
        {
            slarge = large;
            large = X[i];
        }
        else if(X[i] > large)
        {
            slarge = X[i];
        }
    }

    printf("\nSecond largest no in the array is %d\n\n",slarge);
}
