/** Reverse an array */

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Program to Reverse an array\n\n");

    printf("Enter the Range of the Array :\n");
    scanf("%d",&n);

    int arr[n],arr1[n];
    printf("\nEnter the Elements of the Array :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n\nEntered Array :\n");
    j = (n-1);
    for(i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
        arr1[j] = arr[i];
        j--;
    }

    printf("\n\n\nReversed Array :\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",arr1[i]);
    }printf("\n\n");
    return 0;
}
