/** X,Y,Z */

#include<stdio.h>
int main()
{
    short x=4,y=5,z=2;
    scanf("%hi%hi%hi",&x,&y,&z);
    if(x==4)
        if(y==5)
            if(z!=0)
                printf("%d\n",y/z);
            else
                printf("z is zero\n");
        else
            printf("y is not 5\n");
    else
        printf("x is not 4\n");

    return 0;
}
