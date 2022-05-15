#include<stdio.h>

#define ROW 50
#define COL 10

void read_2d_array(int x[ROW][COL], int , int );

void add_array(int a[ROW][COL], int b[ROW][COL], int s[ROW][COL], int , int );

void print_sum_array(int a[ROW][COL], int, int );

int main()
{
    int a[ROW][COL];
    int b[ROW][COL];
    int s[ROW][COL];
    int r,c;

    printf("Enter the range of the Matrix : ");
    scanf("%d%d",&r,&c);

    printf("\nEnter the Elements for the Matrix A : \n");
    read_2d_array(a, r, c);

    printf("\nEnter the Elements for the Matrix b : \n");
    read_2d_array(b, r, c);

    add_array(a, b, s, r, c);

    print_sum_array(s, r, c);

    return 0;
}

void read_2d_array(int x[ROW][COL], int r, int c)
{
    printf("Enter %d Rows and %d Columns \n", r, c);

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
}

void add_array(int a[ROW][COL], int b[ROW][COL], int s[ROW][COL], int r, int c)
{
    printf("\nCalculating Sum...\n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            s[i][j] = a[i][j] + b[i][j];
        }
    }
}

void print_sum_array(int a[ROW][COL], int r, int c)
{
    printf("\nSum of two Matrix is : \n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
