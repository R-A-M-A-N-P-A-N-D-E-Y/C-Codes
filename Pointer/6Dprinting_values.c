//6D pointer concept
#include<stdio.h>
int main()
{
    int si = 100; char ch = 'G';
    int *iptr = &si; char *cptr = &ch;
    int **diptr; char **dcptr;

    diptr = &iptr;
    dcptr = &cptr;

    //printing values in different manner

    printf("si = %d & ch = %c\n",si,ch);
    printf("si = %d & ch = %c\n",*iptr,*cptr);
    printf("si = %d & ch = %c\n",**diptr,**dcptr);
    printf("si = %d & ch = %c\n",*(&si),*(&ch));
    printf("si = %d & ch = %c\n",**(&iptr),**(&cptr));
    printf("si = %d & ch = %c\n",***(&diptr),***(&dcptr));
    return 0;s
}
