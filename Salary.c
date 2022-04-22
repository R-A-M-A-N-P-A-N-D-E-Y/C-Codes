/**Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/

#include<stdio.h>
int main()
{
    int Basic_Salary;
    float HRA,DA,Gross_Salary;

    printf("\n Enter the Basic Salary: \n");
    scanf("%d",&Basic_Salary);
    if(Basic_Salary>0)
    {
         if(Basic_Salary<=10000)
         {
             HRA=Basic_Salary*0.2;
             DA=Basic_Salary*0.8;
         }
         else if(Basic_Salary<=20000 && Basic_Salary>10000)
         {
            HRA=Basic_Salary*0.25;
            DA=Basic_Salary*0.90;
         }
         else
         {
            HRA=Basic_Salary*0.30;
            DA=Basic_Salary*0.95;
         }
    }
    else
    {
        printf("\n Enter Valid Basic Salary. \n");
    }

    Gross_Salary=Basic_Salary+HRA+DA;
    printf("\n The Gross Salary is : %0.2f \n",Gross_Salary);

    return 0;
}
