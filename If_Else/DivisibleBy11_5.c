/** No Divisible By 5 And 11 */

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter your no.\n");
    scanf("%d",&a);
    b=a%5;
    c=a%11;

    if ((b==0) && (c==0))
    {
        printf("It is divisible by both 5 and 11\n");
    }
    else
    {
        printf("It is not divisible by both 5 and 11\n");
    }

    return 0;
}

