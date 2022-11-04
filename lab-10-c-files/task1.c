#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define SIZE 3
void printArray(int a[][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("|\t");
		for (int j = 0; j < SIZE; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("|\n");
	}
}
void search(int a[][SIZE])
{
	int num, flag = 0;
	printf("\nEnter the number to search: ");
	scanf("%d", &num);
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (num == a[i][j])
			{
				flag = 1;
				break;
			}
		}
	}
	if (flag == 1)
	{
		printf("NUmber exists in 2D array:");
	}
	else
	{
		printf("Number not existes in 2D array");
	}
}
void average(int a[][SIZE])
{
	int sum=0;
	float average;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			sum = sum + a[i][j];
		}
	}
	average = sum / (SIZE * SIZE);
	printf("%f", average);
}
void squareRoot(int a[][SIZE])
{
	int sum = 0;
	float squareRoot;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			sum = sum + pow(a[i][j], 2);
		}
	}
	squareRoot = sqrt(sum);
	printf("%f", squareRoot);
}
int main()
{
	int a[SIZE][SIZE];
	printf("Getting input from user:\n");
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			scanf("%d", &a[i][j]);
		}
		printf("\n");
	}
	squareRoot(a);
}