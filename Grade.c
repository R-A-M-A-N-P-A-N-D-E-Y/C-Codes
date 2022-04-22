/**Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage >= 90% : Grade A
Percentage >= 80% : Grade B
Percentage >= 70% : Grade C
Percentage >= 60% : Grade D
Percentage >= 40% : Grade E
Percentage < 40% : Grade F */

#include<stdio.h>
int main()
{
    int ph,ch,bi,ma,co,total;
    float per;
    printf("\n Enter the marks of Physics: \n");
    scanf("%d",&ph);
    printf("\n Enter the marks of Chemistry: \n");
    scanf("%d",&ch);
    printf("\n Enter the marks of Biology: \n");
    scanf("%d",&bi);
    printf("\n Enter the marks of Mathematics: \n");
    scanf("%d",&ma);
    printf("\n Enter the marks of Computer: \n");
    scanf("%d",&co);

    total=ph+ch+bi+ma+co;
    per=(total/500)*100.0;

    if(per>=90 && per<=100)
    {
        printf("\n\n\n\n Grade A\n\n");
        printf("\n Total Percentage: %0.2f \n",per);
    }
    else if(per>=80 && per<90)
    {
        printf("\n\n\n\n Grade B\n\n");
        printf("\n Total Percentage: %0.2f % \n",per);
    }
    else if(per>=70 && per<80)
    {
        printf("\n\n\n\n Grade C\n\n");
        printf("\n Total Percentage: %0.2f \n",per);
    }
    else if(per>=60 && per<70)
    {
        printf("\n\n\n\n Grade D\n\n");
        printf("\n Total Percentage: %0.2f \n",per);
    }
    else if(per>=40 && per<50)
    {
        printf("\n\n\n\n Grade E\n\n");
        printf("\n Total Percentage: %0.2f \n",per);
    }
    else
    {
        printf("\n\n\n\n Grade F\n\n");
        printf("\n Total Percentage: %0.2f \n",per);
    }


    return 0;
}

