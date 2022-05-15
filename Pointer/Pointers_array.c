#include<stdio.h>
int main()
{
    int a[5];

    printf("Enter 3 no. \n");

    for(int i=0; i<3; i++)
    {
        scanf("%d",(a+i));
    }

    printf("\nEntered values :\n");

    for(int i=0; i<3; i++)
    {
        printf("%d\t", *(a + i));
    }
    printf("\n\n");

    return 0;
}
