/**
1.Creating structure variable in C
2.Second Method of Creating structure variable in C
3.Accessing members of C structures
4.Array of structures in C
5. typedef keyword in C
6.Nested structures in C
7.Passing function to structures in C
8.Why to use structures in C?
9.Limitations of structures in C
*/

#include<stdio.h>
int main()
{
    struct Student_name
    {
        char name[20];
        int roll_num;
        char gender[20];
        int age;
        float height;
    };

    struct Student_name Student;

    printf("Enter the Details : \n");

    printf("\nEnter the Name : ");
    scanf("%s", Student.name);

    printf("\nEnter the Roll No. : ");
    scanf("%d", &Student.roll_num);

    printf("\nEnter the Gender : ");
    scanf("%s", Student.gender);

    printf("\nEnter the Age : ");
    scanf("%d", &Student.age);

    printf("\nEnter the Height : ");
    scanf("%f", &Student.height);


    printf("\nThe Name is : %s\n",Student.name);

    printf("The Roll No. is : %d\n",Student.roll_num);

    printf("The Gender is : %s\n",Student.gender);

    printf("The Age is : %d\n",Student.age);

    printf("The Height is : %0.2f\n",Student.height);


    return 0;
}
