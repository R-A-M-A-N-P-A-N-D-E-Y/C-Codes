/**age range */

#include<stdio.h>
int main()
{
    short age;
    printf("Enter your age:\n");
    scanf("%hi",&age);

    if(age>=1 && age<=20)
    {
        if(age>=1 && age<=10)
        {
            if(age>=1 && age<=5)
                printf("Age is between 1-5 years.\n");
            else
                printf("Age is between 6-10.\n");
        }
        else
            if(age>=11 && age<=20)
        {
            if(age>=11 && age<=15)
                printf("Age is between 11-15.\n");
            else
                printf("Age is between 16-20.\n");
        }
    }
    else
    {
        printf("Age is greater than 20.\n");
    }

    return 0;
}
