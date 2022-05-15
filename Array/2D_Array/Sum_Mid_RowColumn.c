/** Sum of middle row & column */

#include<stdio.h>
int main()
{
    int n,m,i,j,sum_row=0,sum_column=0;
    printf("Program to Find Sum of middle row & column\n\n");

    printf("Enter the Order of the Matrix :\n");
    scanf("%d %d",&n,&m);
    int arr[n][m];

    if(n != m || (n <= 2 && m <= 2))
    {
        printf("\n\nInvalid Order\n\n");
    }
    else
    {
        printf("\nEnter The Elements Of The Matrix :\n");
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }

        printf("\n\nEntered Matrix :\n");
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d\t",arr[i][j]);
                if(i == n/2)
                {
                    sum_row = sum_row + arr[i][j];
                }
                if(j == n/2)
                {
                    sum_column = sum_column + arr[i][j];
                }
            }
            printf("\n");
        }

        printf("\n\nThe Sum Of The Middle Row is %d\n",sum_row);
        printf("The Sum Of The Middle Column is %d\n\n",sum_column);
    }

    return 0;
}
