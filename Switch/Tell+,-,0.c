//positive negative or zero
#include<stdio.h>
int main()
{
    int a;
    printf("\n Enter any no. : \n");
    scanf("%d",&a);

    switch(a>0)
    {
    case 1:
        printf("\n It is a Positive no.\n");
        break;
    case 0:
        switch(a==0)
        {
        case 1:
            printf("\n The no. is Zero.\n");
            break;
        default:
            printf("\n It is an Negative no.\n");
        }
        break;
    default:
        printf(" \n Neither Positive, Negative or Zero.\n");
    }

    return 0;
}
