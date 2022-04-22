//even odd
#include<stdio.h>
int main()
{
    int a,b;
    printf("\n Enter the no. : \n");
    scanf("%d",&a);

    switch(a%2)
    {
    case 0:
        printf("\n The no is even.\n");
        break;
    case 1:
        printf("\n The no is odd.\n");
        break;
    default:
        printf("");
    }

    return 0;
}
