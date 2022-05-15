/** Upper Triangular Matrix */

#include <stdio.h>
int main()
{
    printf("Program to find if a given matrix is upper triangular or not\n\n");

    int n,m,i,j,count=0,count1=0,a=0,b=0;
    printf("Enter the order of the matrix : \n");
    scanf("%d %d",&n,&m);
    int arr[n][m];

    a = n*((n+1)/2);
    b = (n*m) - a;

    if(n != m)
    {
        printf("\nIvalid order of matrix.\n\n");
    }
    else
    {
        printf("\nEnter the elements of the matrix :\n");
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
            }printf("\n");
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            int a=i,b=j;
                if(a=b || a<b)
                {
                    if(arr[a][b] != 0)
                    count1++;
                }
        }
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            int a=i,b=j;
                if(a>b)
                {
                    if(arr[a][b] == 0)
                    count++;

                }
        }
    }

    printf("\n%d %d",a,b);
    printf("\n%d %d",count1,count);

    if(count1 == a && count == b)
    {
        printf("\nThis Matrix is a Upper Triangular Matrix\n\n");
    }
    else
    {
        printf("\nThis Matrix is NOT a Upper Triangular Matrix\n\n");
    }

    return 0;
}

