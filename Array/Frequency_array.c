#include<stdio.h>

#define MAX 50

void read_array(int *, int );

void print_unique(int *, int *, int );

void find_unique(int *, int *, int);

int srch(int , int *, int *, int *);

int main()
{
    int a[MAX];
    int b[MAX];
    int n;

    printf("Enter the range of the array : ");
    scanf("%d",&n);

    read_array(a,n);

    find_unique(a,b,n);

    return 0;
}

void read_array(int *X, int N)
{
    printf("\nEnter the Elements of the array : \n");
    for(int i=0; i<N; i++)
    {
        scanf("%d",&X[i]);
    }
}

void print_unique(int *X, int *Y, int ctr)
{
    printf("\nUnique no of the array are : \n");
    for(int i=0; i<ctr; i++)
    {
        printf("%8d %8d",X[i],Y[i]);
        printf("\n");
    }printf("\n\n");
}

void find_unique(int *X, int *Y, int N)
{
    int ctr = 0;
    int freq[MAX];

    for(int i=0; i<N; i++)
    {
        srch(X[i],Y,freq,&ctr);
    }

    print_unique(Y,freq,ctr);
}

int srch(int num, int *Y, int *freq, int *ctr)
{
    for(int i=0; i<*ctr; i++)
    {
        if(num == Y[i])
        {
            freq[i] = freq[i] + 1;
            return -1;
        }
    }

    Y[*ctr] = num;
    freq[*ctr] = 1;
    *ctr = *ctr + 1;
    return 0;
}

