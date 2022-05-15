#include<stdio.h>

#define MAX 50

typedef struct StudentRec
{
    char name[MAX];
    float mark;
}student;

student readrecord(int i)
{
    student ns;

    printf("Name & Marks of Student %d \n",i+1);
    scanf("%s%f",ns.name,&(ns.mark));

    return ns;
}

void print_record(student item)
{
    printf("\nName : %s\n",item.name);
    printf("Marks : %0.2f\n\n",item.mark);
}

int main()
{
    int count = 0;
    student class[MAX];

    printf("How Many Students ?\n");
    scanf("%d",&count);

    for(int i=0; i<count; i++)
    {
        class[i] = readrecord(i);
    }

    printf("Entered Data : \n");
    for(int i=0; i<count ; i++)
    {
        print_record(class[i]);
    }

    return 0;
}
