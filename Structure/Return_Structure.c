/** Return Structure */

#include<stdio.h>

typedef struct stuednt_info
{
    char Name[20];
    int Age;
}sinfo ;

sinfo read_data()
{
    sinfo data;
    printf("Enter the Name : ");
    scanf("%s",data.Name);
    printf("Enter the Age : ");
    scanf("%d",&data.Age);

    return (data);
}

int main()
{
    sinfo sdata;

    sdata = read_data();

    printf("\n\nName : %s",sdata.Name);
    printf("\nAge : %d\n\n",sdata.Age);

    return 0;
}

