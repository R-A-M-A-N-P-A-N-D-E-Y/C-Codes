/** Find difference of two matrices */

#include<stdio.h>
int main()
{
    int i,j,n,m,x,y;
    printf("Program to Find Difference of Matrices :\n\n");

    printf("Enter The Range Of the First Matrix :\n");
    scanf("%d %d",&n,&m);
    int arr[n][m];

    printf("\nEnter The Elements Of The First Matrix :\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nEnter The Range Of the Second Matrix :\n");
    scanf("%d%d",&x,&y);
    int arr1[x][y];

    printf("\nEnter The Elements Of The Second Matrix :\n");
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("\n\nFirst Matrix Entered :\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d\t",arr[i][j]);
        }printf("\n");
    }

    printf("\n\nSecond Matrix Entered :\n");
    for(i=0; i<x; i++)
    {
        for(j=0; j<y; j++)
        {
            printf("%d\t",arr1[i][j]);
        }printf("\n");
    }

    if(n != x && m != y)
    {
        printf("\n\nDifference Cannot be Done\n\n");
    }
    else
    {
        int sum[n][m];
        printf("\nDifference Of Two Matrix is :\n");
        for(i=0; i<n; i++)
        {
            for(j=0; j<y; j++)
            {
                sum[i][j] = arr[i][j] - arr1[i][j];
                printf("%d\t", sum[i][j]);
            }printf("\n");
        }
    }

    return 0;
}
