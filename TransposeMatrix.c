#include <stdio.h>
int main()
{
    int i,j,n,m;
    printf("Program to Find Transpose of Matrices :\n\n");

    printf("Enter The Range Of the Matrix :\n");
    scanf("%d %d",&n,&m);
    int arr[n][m],transpose[n][m];

        printf("\nEnter The Elements Of The First Matrix :\n");
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }


        printf("\nEntered matrix: \n");
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < m; ++j)
            {
                printf("%d \t", arr[i][j]);
                transpose[j][i] = arr[i][j];
            }
            printf("\n");
        }


        printf("\nTranspose of the matrix:\n");
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                printf("%d \t", transpose[i][j]);
            }
            printf("\n");
        }

    return 0;
}
