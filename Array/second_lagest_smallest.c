/** C Program to Find the Second Largest & Smallest Elements in an Array */

#include<stdio.h>
#include <limits.h>
int main()
{
    int n,i,Low=0,first,second, second1;
    printf("Program to Find the Second Largest & Smallest Elements in an Array\n\n");

    printf("Enter the Range of the Array\n");
    scanf("%d",&n);

    if(n < 2)
        printf("\n\nNumber of elements should be more than or equal to two\n");
    else
    {
        int arr[n];
    printf("\nEnter the Elements of the array :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    first = second = second1 = INT_MAX;
     printf("Entered Array :\n");
     for(i=0; i<n; i++)
     {
         printf("%d\t",arr[i]);
         if(arr[i] < first)//for second lowest
            {
                second = first;
                first = arr[i];
            }
        else if(arr[i] < second && arr[i] != first)
            second = arr[i];

     }

     //for second largest
     for(i=0; i<n; i++)
     {
         if(arr[i] > first)
            {
                second1 = first;
                first = arr[i];
            }
        else if(arr[i] > second1 && arr[i] != first)
            {
                second1 = arr[i];
            }

     }

    }
     printf("\n\nSecond Lowest no in the Array is %d\n",second);
     printf("Second Highest no in the Array is %d\n",second1);

     return 0;
}
