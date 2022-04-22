/** Count occurrences of numbers */

#include<stdio.h>
int main()
{
    int n,i,j,temp,count;
    printf("Program to Count occurrences of numbers :\n\n");

    printf("Enter the range of the Array :\n");
    scanf("%d",&n);
    int arr[n];

    printf("\nEnter the elements of the array :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nElements of the array are :\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }

    printf("\n\nElements Occurrences are :\n");
    for(i=0; i<n; i=j)
    {
        temp = arr[i];
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[j] != temp)
                break;
            else
                count++;
        }
        printf("\n%d\t%d",temp,count);
    }
    return 0;
}
