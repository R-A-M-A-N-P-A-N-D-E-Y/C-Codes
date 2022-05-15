/** Two Matrix are equal or not */

#include <stdio.h>
int main ()
{
  int n, m, o, p, count=0;
  printf("Program to check if Two Matrix are Equal or Not\n\n");

  printf ("Enter the order of matrix 1:\n");
  scanf ("%d %d", &n, &m);
  int arr[n][m];

  printf ("\nEnter the order of matrix 2:\n");
  scanf ("%d %d", &o, &p);
  int arr1[o][p];

  if(n!=o || m!=p)
  {
      printf ("\nOrder of Matrix is Not Equal, So Matrix cannot be equal.\n");
  }
  else
    {
      printf ("\nEnter the elements of the matrix 1 :\n");
      for (int i = 0; i < n; i++)
	{
	  for (int j = 0; j < m; j++)
	    {
	      scanf ("%d", &arr[i][j]);
	    }
	}

	printf ("\nEnter the elements of the matrix 2 :\n");
      for (int i = 0; i < o; i++)
	{
	  for (int j = 0; j < p; j++)
	    {
	      scanf ("%d", &arr1[i][j]);
	      if(arr1[i][j] == arr1[i][j])
	      count++;
	      else
	      continue;
	    }
	}

    if(count == (n*m))
    {
        printf("\nThe 2 Matrix are Equal:\n");

        printf("\nMatrix 1 :\n");
        for (int i = 0; i < n; i++)
	    {
            for (int j = 0; j < m; j++)
            {
                printf("%d\t", arr[i][j]);
            }printf("\n");
        }

        printf("\nMatrix 2 :\n");
        for (int i = 0; i < o; i++)
        {
            for (int j = 0; j < p; j++)
            {
                printf("%d\t", arr1[i][j]);
            }printf("\n");
        }
    }
    else
    {
        printf("\nThe 2 Matrix are NOT Equal:\n");
    }
    }

  return 0;
}

