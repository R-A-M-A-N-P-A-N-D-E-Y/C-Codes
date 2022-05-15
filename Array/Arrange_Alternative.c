/** To Arrange negative elements in an alternative manner */

#include<stdio.h>
int main()
{
    printf("Program to arrange negative elements in an alternate manner\n\n");

    int i,j,n;
    printf("Enter the Range of the Array :\n");
    scanf("%d",&n);
    int arr[n];

    printf("Enter the elements of the Array :\n");
    for(i=0; i<n; i++)
    {
        printf("Enter Element %d : ",i);
    }

    printf("Entered Array :\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
        if(arr[i] < 0)
            arr1[i] = arr[i];
    }

    for(i=0; i<n; i++)
    {
        printf("%d\t",arr1[i]);
    }
}
