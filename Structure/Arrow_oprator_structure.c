#include<stdio.h>

struct SomeBody
{
    char name[50];
    int age;
    float weight;
};

int main()
{
    struct SomeBody *Sptr, SomePerson;
    Sptr = &SomePerson;

    printf("Enter Name : ");
    scanf("%s",Sptr->name);

    printf("Enter Age : ");
    scanf("%d",&Sptr->age);

    printf("Enter Weight : ");
    scanf("%f",&Sptr->weight);

    printf("\nEntered Details : \n");

    printf("\nName : %s\n",Sptr->name);
    printf("\nAge : %d\n",Sptr->age);
    printf("\nWeight : %.2f\n\n",Sptr->weight);
}
