/** develop a C program to find that the given matrix is identity matrix or not */

#include<stdio.h>
int main()
{
    int n,m,count=0,count1=0;
    printf("Program to Find if the Matrix is Identity Matrix Or not\n\n");

    printf("Enter the order of matrix:\n");
    scanf("%d %d",&n,&m);
    int arr[n][m];

    if(n != m)
    {
        printf("\nInvalid Order of Matrix.\n");
    }
    else
    {
        printf("\nEnter the elements of the matrix :\n");
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                scanf("%d",&arr[i][j]);
                if(i==j)
                 {
                     if(arr[i][j] == 1)
                        count++;
                    else
                        continue;
                 }
                 else
                 {
                     if(arr[i][j] == 0)
                        count1++;
                     else
                        continue;
                 }
            }
        }
        if(count == n && count1 == ((n*m)-n))
        {
            printf("\nIt Is A Identity Matrix :\n\n");
            for(int i=0; i<n; i++)
            {
            for(int j=0; j<n; j++)
             {
                printf("%d\t",arr[i][j]);
             }
             printf("\n");
            }
        }
        else
        {
            printf("\n\nIt is NOT an IDENTITY Matrix\n");
        }
    }
    return 0;
}


