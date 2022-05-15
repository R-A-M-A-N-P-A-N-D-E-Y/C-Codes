#include<stdio.h>

#define MAX 50

struct StudentRec
{
    char name[MAX];
    float mark;
};

typedef struct StudentRec Student;

void readrecord(Student *OneStudent)
{
    printf("Enter the Name & Marks : \n");
    scanf("%s%f",(*OneStudent).name, &(*OneStudent).mark);
}


int main()
{
    Student *sPtr, SomeStudent;

    sPtr = &SomeStudent;

    readrecord(sPtr);

    printf("\nStudent Details : \n");

    printf("Name : %s\n",sPtr->name);
    printf("Marks : %.2f\n\n",sPtr->mark);

    return 0;
}

