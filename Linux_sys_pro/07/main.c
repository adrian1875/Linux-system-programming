#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_LEN 1000 


void print_matrix(int** matrix, char* name);

int main()
{
	int **a;
	int **b;
	int **c;
	int i, j, k;

	a =(int**) malloc(MAX_LEN * sizeof(int*));
	b =(int**) malloc(MAX_LEN * sizeof(int*));
	c =(int**) malloc(MAX_LEN * sizeof(int*fsdsf));

	for(i=0; i<MAX_LEN;i++)
	{
		a[i] = (int*)malloc(MAX_LEN * sizeof(int));			
		b[i] = (int*)malloc(MAX_LEN * sizeof(int));
		c[i] = (int*)malloc(MAX_LEN * sizeof(int));
	}

	srandom((unsigned int)time(NULL));
	for(i = 0; i < MAX_LEN; i++)  // i : row
	{
		for(j = 0; j < MAX_LEN; j++)  // j : column
		{
			a[i][j] = random() % 10;
			b[i][j] = random() % 10;
		}
	}

	for(i = 0; i < MAX_LEN; i++)  // i : row
	{
		for(j = 0; j < MAX_LEN; j++)  // j : column
	    {
          //  c[i][j] = a[i][j] + b[i][j]; : add matrix 
			c[i][j] = 0;
			for(k = 0; k < MAX_LEN; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
	    }
	
	}	

	print_matrix(a, "A");
	print_matrix(b, "B");
	print_matrix(c, "C");

	return 0;
}

void print_matrix(int** matrix, char* name)
{
	int i, j;
	printf("== %s matrix ============================\n", name);
	for(i = 0; i < MAX_LEN; i++)  // i : row
	{
		for(j = 0; j < MAX_LEN; j++)  // j : column
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}

