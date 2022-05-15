#include<stdio.h>
int main()
{
    printf("\n\nsort elements of array in ascending order :\n ");
       printf("\n");

    int counter1,counter2,chk,temp_val;
    printf("Input the size of array : \n");

    scanf("%d",&chk);
    printf("Input the elements the array :\n");

    int val[chk];

    for(counter1=0;counter1<chk;counter1++)
    {
        printf("element - %d :",counter1);
        scanf("%d",&val[counter1]);
    }

    for(counter1=1;counter1<=chk-1;counter1++)
    {
        temp_val=val[counter1];
        counter2=counter1-1;

        while((temp_val<val[counter2])&&(counter2>=0))
        {
            val[counter2+1]=val[counter2];
            counter2=counter2-1;
        }
        val[counter2+1]=temp_val;
    }

    printf("\n Output generated after using insertion sort \n");

    for(counter1=0;counter1<chk;counter1++)
    {
        printf("%d ",val[counter1]);
    }

    return 0;
}
