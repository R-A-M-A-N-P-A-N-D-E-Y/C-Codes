#include<stdio.h>
int main()
{
    int i,n;
    int arr[10], *p;
    p = arr;

    printf("\nEnter the no. of Elements : ");
    scanf("%d",&n);
    printf("\nEnter the Elements : \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",(p+i));
    }
    printf("Entered Elements are : \n");
    for(i=0; i<n; i++)
    {
        printf("arr[%d] = %d",i,*(p+i));
        printf("\n");
    }

    return 0;
}
