#include<stdio.h>

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a,b;

    printf("Enter the value of a & b : ");
    scanf("%d %d",&a,&b);

    printf("\nValue of a = %d and b = %d",a,b);

    swap(&a,&b);

    printf("\n\nValue after swapping, a = %d and b = %d \n\n",a,b);

    return 0;
}
