#include<stdio.h>

#define MAX 50
void print_add(int *x, int n);

int main()
{
    int a[MAX] = {1, 2, 3};

    printf("Array A address of MAIN = %lu\n",(unsigned long)&a);

    print_add(a,3);

    printf("Array A address of MAIN = %lu\n",(unsigned long)a);

    return 0;
}

void print_add(int *x, int n)
{
    printf("Address of Array elements \n");

    for(int i=0; i<n; i++)
    {
        printf("Address x[%d] = %lu\n",i,(unsigned long)&x[i]);
    }

    printf("Address OF Pointer X = %lu\n",(unsigned long)&x);
    printf("Address IN Pointer X = %lu\n",(unsigned long)x);

    printf("Size of Pointer Variable X = %lu\n",(unsigned long) sizeof(&x));
}
