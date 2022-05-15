#include <stdio.h>
int main()
{
    int n, i, j, temp;

       printf("\n\nsort elements of array in ascending order :\n ");
       printf("\n");

    printf("Input the size of array : \n");
    scanf("%d", &n);

    int arr1[n];

       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

    for(i=0; i<n-1; i++)
    {
        temp = i;
        for(j=i+1; j<n; j++)
        {
            if(arr1[temp] > arr1[j])
            {
                temp = j;
            }
        }
            if(temp != i)
            {
                int temp_value = arr1[i];
                arr1[i] = arr1[temp];
                arr1[temp] = temp_value;
            }
    }
    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", arr1[i]);
    }
	        printf("\n\n");
	        return 0;
}
