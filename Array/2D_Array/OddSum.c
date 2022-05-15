#include<stdio.h>
int main()
{
    printf("Sum of odd terms in an array:\n\n");
    int n,i,sum=0;
    printf("Enter the limit of the array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter Values: \n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n; i++)
    {
        if(a[i]%2==1)
            sum=sum+a[i];
    }
    printf("\nTotal Sum of Odd values is: %d ",sum);
    return 0;
}
