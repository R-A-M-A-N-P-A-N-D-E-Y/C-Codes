#include<stdio.h>
int main()
{
    int a[3];

    int *ptr = NULL;

    ptr =a;

    printf("Enter 3 Values : \n");
    for(int i=0; i<3; i++)
    {
        scanf("%d",(ptr + i));
    }

    printf("\nEntered values : \n");
    for(int i=0; i<3; i++)
    {
        printf("%d %d %d",*(ptr + i), a[i], ptr[i]);
        printf("\n");
    }printf("\n");

    return 0;
}
