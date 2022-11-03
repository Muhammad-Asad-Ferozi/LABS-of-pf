
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define COL 10
#define ROW 10
#define COL1 10
#define ROW1 10

void insert(int A[][COL], int B[][COL1],int row, int col, int row1, int col1, int insertRow, int insertCol)
{
	int a = 0;
	int b = 0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if ((i>= insertRow-1 && j>= insertCol-1) && (a<row1 && b<col1) )
			{
				A[i][j] = B[a][b];
				b++;
				if (b == col1)
				{
					a++;
					b = 0;
					break;
				}
			}
		}
		
	}
	printf("\n\n");
	for (int i = 0; i < row; i++)
	{
		printf("|\t");
		for (int j = 0; j < col; j++)
		{
			printf("%d\t", A[i][j]);
		}
		printf("|\n");
	}
}
int main()
{
	int A[ROW][COL];
	int B[ROW1][COL1];
	int row, col;
	int row1, col1;
	int insertRow, insertcol;

	do
	{

		// ENter the row and column of of matrix 1
		do
		{
			printf("\nEnter the number of A matrix rows: ");
			scanf("%d", &row);
		} while (row < 1 || row>10);
		do
		{
			printf("Enter the number of A matrix cols: ");
			scanf("%d", &col);
		} while (col < 1 || col>10);

		// ENter the row and column of of matrix B
		do
		{
			printf("Enter the number of B matrix rows: ");
			scanf("%d", &row1);
		} while (row1 < 1 || row1>10);
		do
		{
			printf("Enter the number of B matrix cols: ");
			scanf("%d", &col1);
		} while (col1 < 1 || col1>10);

		// ENter the row and column of of matrix B
		do
		{
			printf("Enter the starting index of row to insert B marix in matrix A: ");
			scanf("%d", &insertRow);
		} while (insertRow < 1 || insertRow>10);
		do
		{
			printf("Enter the starting index of col to insert B marix in matrix A: ");
			scanf("%d", &insertcol);
		} while (insertcol < 1 || insertcol>10);
		if (((insertRow + row1) > row) || ((insertcol + col1) > col))
		{
			printf("Errror!!!!!!!\n\n");
		}

	} while (((insertRow + row1) > row) || ((insertcol + col1) > col));


// Enter the value in MAtrix A
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &A[i][j]);
		}
		A[i][col] = '\0';
		printf("\n");
	}

// printing the value of A matrix
	for (int i = 0; i < row; i++)
	{
		printf("|\t");
		for (int j = 0; j < col; j++)
		{
			printf("%d\t", A[i][j]);
		}

		printf("|\n");
	}

// Enter the value in MAtrix B
	for (int i = 0; i < row1; i++)
	{
		for (int j = 0; j < col1; j++)
		{
			scanf("%d", &B[i][j]);
		}
		B[i][col1] = '\0';
		printf("\n");
	}

// printing the value of B matrix
	for (int i = 0; i < row1; i++)
	{
		printf("|\t");
		for (int j = 0; j < col1; j++)
		{
			printf("%d\t", B[i][j]);
		}

		printf("|\n");
	}

	insert(A, B, row, col, row1, col1, insertRow, insertcol);
}