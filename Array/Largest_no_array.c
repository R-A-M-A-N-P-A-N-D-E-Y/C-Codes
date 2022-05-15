/** C Program to Find the Largest Number in an Array */

#include<stdio.h>
int main()
{
    int n,i,j=0,temp,greatest=0;
    printf("Program to Find the Largest Number in an Array\n\n");

    printf("Enter the Range of the Array :\n");
    scanf("%d",&n);

    int arr[n];

    printf("\nEnter the Elements of the array :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nEntered array :\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
        if(arr[0] < arr[i])
        {
            arr[0] = arr[i];
        }
    }
    greatest = arr[0];

    printf("\n\nLargest Number in the array is %d\n",greatest);

    return 0;
}
