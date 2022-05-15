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

void printRecord(Student OneStudent)
{
    printf("Name : %s\n",OneStudent.name);
    printf("Marks : %.2f\n\n",OneStudent.mark);
}

int main()
{
    Student SomeStudent;

    readrecord(&SomeStudent);

    printf("\nStudent Details : \n");

    printRecord(SomeStudent);

    return 0;
}

