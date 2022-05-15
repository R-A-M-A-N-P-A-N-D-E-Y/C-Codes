/** Vowel Or Consonant */

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your Alphabhet\n");
    scanf("%c",&ch);

    if((ch=='a') || (ch=='A'))
    {
        printf("It is a Vowel");
    }
    else if((ch=='e') || (ch=='E'))
    {
        printf("It is a Vowel");
    }
    else if((ch=='i') || (ch=='I'))
    {
        printf("It is a Vowel");
    }
    else if((ch=='o') || (ch=='O'))
    {
        printf("It is a Vowel");
    }
    else if((ch=='u') || (ch=='U'))
    {
        printf("It is a Vowel");
    }
    else
    {
        printf("It is a Consonant");
    }

    return 0;

}
