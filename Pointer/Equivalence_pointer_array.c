#include<stdio.h>

void show(int x[], int *y)
{
    printf("content of array A : \n");
    for(int i=0; i<5; i++)
    {
        printf("%d %d",x[i],*(x+i));
        printf("\n");
    }

    printf("\n\nContent of array B : \n");
    for(int i=0; i<5; i++)
    {
        printf("%d %d",*(y + i),y[i]);
        printf("\n");
    }
}

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {11, 22, 33, 44, 55};

    show(a,b);
    printf("\n\n");

    return 0;
}
