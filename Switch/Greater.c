//grater between two
#include<Stdio.h>
int main()
{
    int a,b;
    printf("\n Enter Two no. :\n");
    scanf("%d %d",&a,&b);

    switch(a>b)
    {
    case 1:
        printf("\n %d > %d\n",a,b);
        break;
    case 0:
        printf("\n %d < %d\n",a,b);
        break;
    default:
        printf("");

    }

    return 0;
}
