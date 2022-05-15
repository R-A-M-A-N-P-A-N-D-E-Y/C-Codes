#include<stdio.h>

void add(int a, int b)
{
    a = a + 10;
    b = b + 10;
    printf("\nValue of A & B is %d %d", a, b);
}

int main()
{
    int a = 25;
    int b = 10;

    printf("Value of A & B is %d %d",a,b);

    add(a,b);

    printf("\nValue of A & B is %d %d\n",a ,b);

    return 0;
}
