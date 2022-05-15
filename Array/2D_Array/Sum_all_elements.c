/** Sum of all elements in matrix */

#include<stdio.h>
int main()
{
    int i,j,n,m,sum=0;
    printf("Program to find the Sum of all elements in matrix :\n\n");

    printf("Enter the Order of the Matrix :\n");
    scanf("%d %d",&n,&m);

    int arr[n][m];

    printf("\nEnter the Elements of the matrix :\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nEntered Matrix :\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d\t",arr[i][j]);
            sum = sum + arr[i][j];
        }
        printf("\n");
    }

    printf("\n\nThe Sum Of All The Elements Of The Matrix is %d\n\n",sum);

    return 0;
}
