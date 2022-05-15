/** Structure Using Function */

#include<stdio.h>

typedef struct Student_info
{
    char Name[20];
    int Age;
    char Gender[20];
    float Weight;
}Student;

Student print_info(struct Student_info Student)
{
    printf("Name : %s",Student.Name);
    printf("\nAge : %d",Student.Age);
    printf("\nGender : %s",Student.Gender);
    printf("\nWeight : %0.2f Kg\n\n",Student.Weight);
}

int main()
{
    struct Student_info sdata = {"Raman", 18, "Male", 70.51};

    printf("Entered Info : \n\n");
    print_info(sdata);

    return 0;
}
