#include<stdio.h>

#define ROW 50
#define COL 10

void read_2d_array(int x[ROW][COL], int , int );

void sum_2d_array(int x[ROW][COL], int , int );

int main()
{
    int a[ROW][COL];
    int n,m;

    printf("Enter the the order of the Matrix : ");
    scanf("%d%d",&n,&m);

    read_2d_array(a, n, m);

    sum_2d_array(a, n, m);

    return 0;
}

void read_2d_array(int x[ROW][COL], int r , int c)
{
	int i , j ;

	printf("Enter %d Rows and %d Columns \n", r, c);
	for ( i = 0 ; i < r ; i++)
    {
         for ( j = 0 ; j < c ; j++)
	 	 {
	 	     scanf("%d", &x[i][j]);
	 	 }
    }
}


void sum_2d_array(int x[ROW][COL],int r, int c)
{
    int sum = 0;

    printf("\nCOLUMN's and Their Sum's are : \n");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            sum = sum + x[j][i];
            printf("%d ",x[j][i]);
        }

        printf("=> Sum of the %d column is %d \n",i+1,sum);
        sum = 0;
    }
}

