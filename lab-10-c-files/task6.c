#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 10
void addArray(const int* a1, const int* a2, int* sum, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(sum + i) = (*(a1 + i) + *(a2 + i));
		printf("%d", *(sum + i));
	}
}
int main()
{
	int a1[SIZE] = { 1,1,1,1,1,1,1,1,1,1 };
	int a2[SIZE] = { 2,2,2,2,2,2,2,2,2,2 };
	int sum[SIZE];
	printf("First array is: ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d", a1[i]);
	}
	printf("\nSecond array is: ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d", a2[i]);
	}
	int size;
	printf("\nEnter the index for which you want to sum array: ");
	scanf("%d", &size);
	addArray(a1, a2, sum, size);
}