/** Uppercase Or Lowercase */

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your alphabat\n");
    scanf("%c",&ch);

    if( (ch>='A') && (ch<='Z'))
    {
        printf("It is Uppercase Alphabat");
    }
    else if( (ch>='a') && (ch<='z'))
    {
        printf("It is an Lowercase Alphabat");
    }
    else
    {
        printf("Enter a Alphabat");
    }

    return 0;
}
