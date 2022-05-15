#include<stdio.h>
int main()
{
    int age = 18, *sptr = &age;
    printf("Age via AGE variable = %d\n", age);

    printf("Age via SPTR variable = %d\n", *sptr);

    int **dptr = NULL; dptr = &sptr;
    printf("Age via DPTR variable = %d\n", **dptr);

    int ***tptr = NULL; tptr = &dptr;
    printf("Age via TPTR variable = %d\n", ***tptr);

    printf("Age via &TPTR variable = %d\n", ****(&tptr));

    return 0;
}
