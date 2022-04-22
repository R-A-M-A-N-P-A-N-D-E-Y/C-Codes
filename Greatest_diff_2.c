/** C Program to Find 2 Elements in the Array such that Difference between them is Largest */

#include<stdio.h>
int main()
{
    int n,i,no1=0,no2=0;
    printf("Program to Find 2 Elements in the Array such that Difference between them is Largest\n\n");

    printf("Enter the Range of the Array :\n");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter the value of the Array :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nEntered Array :\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
        if(arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }no1 = arr[0];
    }

    for(i=0; i<n; i++)
    {
        if(arr[0] > arr[i])
        {
            arr[0] = arr[i];
        }no2 = arr[0];
    }

    printf("\n THe two 2 Elements with the Largest Difference are %d and %d\n",no1,no2);

    return 0;
}
