#include<stdio.h>

#define MAX 50

void read_array(int *, int );
int srch(int *, int , int );

int main()
{
    int a[MAX];
    int n ;
    int srch_num;

    printf("Enter the range of the Array : ");
    scanf("%d",&n);
    read_array(a,n);

    printf("\nEnter the Search Element : ");
    scanf("%d",&srch_num);
    srch(a,n,srch_num);

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

int srch(int *x, int n, int srch)
{
    for(int i=0; i<n; i++)
    {
        if(x[i] == srch)
        {
            printf("\nSearch Number %d Found at %d Location\n\n",srch,i+1);
            return 0;
        }
    }

    printf("\n%d Search Number Not Found \n\n",srch);
    return -1;
}
