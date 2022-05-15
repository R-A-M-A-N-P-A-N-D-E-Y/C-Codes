/**
Write a program to read and display 3 x 3 matrix
*/

#include<stdio.h>
int main()
{
    int i,j,n,m;
    printf("Program to Read And Display Matrices :\n\n");

    printf("Enter The Range Of the Matrix :\n");
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


    printf("\n\nPrinting the Matrix :\n");

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
