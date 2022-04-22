//Calculator
#include<stdio.h>
int main()
{
    int a,b,c;
    char opration;
    printf("Enter Your Values:\n");
    scanf("%d %c %d" ,&a,&opration,&b);

    switch(opration)
    {
        case'+':
        c=a+b;
        printf("\n %d \n",c);
        break;
        case'-':
        c=a-b;
        printf("\n %d \n",c);
        break;
        case'*':
        c=a*b;
        printf("\n %d \n",c);
        break;
        case'/':
            if(b==0)
                printf("\n Denomenator is Zero \"invalid\" \n");
            else
            {
                printf("\n %d \n",a/b);
            }

        break;
        default:printf("\n Invalid Opration. \n");
    }

    return 0;
}
