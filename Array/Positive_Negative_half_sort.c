#include<stdio.h>
#include<stdlib.h>

#define MAX 50

void read_array(int *, int );

void print_array(int * , int );

void pos_neg_part_sort(int *, int *, int );

int cmpfunc (const void * , const void * );

int main()
{
    int a[MAX],n;
    int b[MAX];

    printf("Enter the range of the array : ");
    scanf("%d",&n);

    read_array(a,n);

    printf("\nArray before Partition : \n");
    print_array(a,n);

    pos_neg_part_sort(a,b,n);

    printf("\n\nArray after Partition : \n");
    print_array(b,n);

    printf("\n\nArray after Partition and Sorting : \n");
    qsort(b, n, sizeof(int), cmpfunc);
    print_array(b,n);

    printf("\n\n");

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

void print_array(int *X , int N)
{
    for(int i=0; i<N; i++)
    {
        printf("%d\t",X[i]);
    }
}

void pos_neg_part_sort(int *X, int *Y, int N)
{
    int pos = 0;
    int neg = N-1;

    for(int i=0; i<N; i++)
    {
        if(X[i] > 0)
        {
            Y[pos] = X[i];
            pos++;
        }
        else if(X[i] < 0)
        {
            Y[neg] = X[i];
            neg--;
        }
    }
    //For Zero
    for(int i=pos; i<=neg; i++)
    {
        Y[pos] = 0;
        pos++;
    }
}

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

