#include<stdio.h>
void msort(int a[], int n);
void merge_msort_re(int a[], int l, int r);
void merge_msorted_arr(int a[], int l, int m, int r);

int main()
{
    int n, i, j;

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

	    msort(arr,n);

    printf("\nElements of array in sorted ascending order:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n\n");
    return 0;
}
void msort(int a[], int n)
{
    merge_msort_re(a, 0, n-1);
}
void merge_msort_re(int a[], int l, int r)
{
    if(l < r)
    {
        int m = l + (r - 1)/2;
        merge_msort_re(a, l, m);
        merge_msort_re(a, m+1, r);

        merge_msorted_arr(a, l, m, r);
    }
}
void merge_msorted_arr(int a[], int l, int m, int r)
{
    int left_length = m - l + 1;
    int right_length = r - m;

    int temp_left[left_length];
    int temp_right[right_length];

    int i,j,k;

    for(int i = 0; i < left_length; i++)
    {
        temp_left[i] = a[l+i];
    }

    for(int i = 0; i < right_length; i++)
    {
        temp_right[i] = a[m + 1 + i];
    }

    for(i=0, j=0, k=l; k <= r; k++)
    {
        if((i < left_length) && (j >= right_length || temp_left[i] <= temp_right[j] ))
        {
            a[k] = temp_left[i];
            i++;
        }
        else
        {
            a[k] = temp_right[j];
            j++;
        }
    }

}
