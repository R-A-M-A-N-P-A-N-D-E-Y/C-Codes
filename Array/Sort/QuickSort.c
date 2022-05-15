#include <stdio.h>
void swap(int *x, int *y);
void qsort(int arr[], int n);
void qsort_re(int arr[], int low, int high);
int partition(int arr[], int low, int high);
int main()
{
    int n, i, j, l, h;

       printf("\n\nsort elements of array in ascending order :\n ");
       printf("\n");

    printf("Input the size of array : \n");
    scanf("%d", &n);

    int arr[n];

       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr[i]);
	    }

	    qsort(arr,n);

    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n\n");
    return 0;
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void qsort(int arr[], int n)
{
    qsort_re(arr, 0, n-1);
}
void qsort_re(int arr[], int low, int high)
{
    if(low < high)
    {
        int pivot_index = partition(arr, low, high);
        qsort_re(arr, low, pivot_index - 1); //left
        qsort_re(arr, pivot_index + 1, high); //right
    }
}
int partition(int arr[], int low, int high)
{
    int pivot_value = arr[high];
    int i = low;

    for(int j = low; j < high; j++)
    {
        if(arr[j] <= pivot_value)
        {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
    swap(&arr[i], &arr[high]);

    return i;
}

