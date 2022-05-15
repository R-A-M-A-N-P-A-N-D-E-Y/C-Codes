/** Find product of matrices */

#include<stdio.h>
int main()
{
    int i,j,n,m,x,y;
    printf("Program to Find product of Matrices :\n\n");

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
            printf("%d\t",arr[i][j]);
        }printf("\n");
    }

    if(n != y)
    {
        printf("\nProduct Cannot Be Done Of These Matrix.\n\n");
    }
    else
    {
        int Product[n][y];

         for(i=0; i<n; i++)
         {
             for(j=0; j<y; j++)
             {
                 Product[i][j] = 0;
                 for(int k=0; k<x; k++)
                 {
                     Product[i][j] = Product[i][j] + (arr[i][k] * arr1[k][j]);
                 }
             }
         }
         printf("\nProduct Of Two Matrix is :\n");
         for(i=0; i<n; i++)
         {
             for(j=0; j<y; j++)
             {
                 printf("%d\t",Product[i][j]);
             }printf("\n");
         }
    }

    return 0;
}
