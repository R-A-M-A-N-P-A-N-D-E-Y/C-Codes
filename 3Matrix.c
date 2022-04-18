/**
Write a program to read and display 3 x 3 matrix
*/

#include<stdio.h>
int main()
{
    printf("\n\n3 x 3 Matrix\n");
    int arr[3][3];
    printf("Enter the value of the matrix :\n");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\n\nPrinting the Matrix :\n");

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
