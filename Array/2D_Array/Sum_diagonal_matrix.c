/** Sum of diagonal elements */

#include<stdio.h>
int main()
{
    int i,j,n,m,sum=0;
    printf("Program To Find The Sum of diagonal elements in a Matrix.\n\n");

    printf("Enter the Order Of the Matrix :\n");
    scanf("%d %d",&n,&m);
    int arr[n][m];

    if(n != m)
    {
        printf("\nInvalid Order Of Matrix\n\n");
    }
    else
    {
        printf("\nEnter the Elements of the Matrix :\n");
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
                if(i == j)
                {
                    sum = sum + arr[i][j];
                }
                else
                {
                    continue;
                }
            }
            printf("\n");
        }

        printf("\n\nThe Sum Of All The Diagonal Elements is %d\n\n",sum);

    }


    return 0;
}
