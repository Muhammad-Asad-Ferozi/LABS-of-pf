
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define COL 10
#define ROW 10


void transpose(int ar[][COL], int row, int col)
{
	for (int i = 0; i < col; i++)
	{
		printf("|\t");
		for (int j = 0; j < row; j++)
		{
			printf("%d\t", ar[j][i]);
		}
		printf("|\n");
	}
}
int main()
{
	int ar[ROW][COL];
	int row, col;
	do
	{
		printf("Enter the number of rows: ");
		scanf("%d", &row);
	} while (row<1 || row>10);
	do
	{
		printf("Enter the number of cols: ");
		scanf("%d", &col);
	} while (col < 1 || col>10);

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &ar[i][j]);
		}
		ar[i][col] = '\0';
		printf("\n");
	}
	transpose(ar, row, col);
}