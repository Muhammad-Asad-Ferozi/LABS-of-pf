#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SIZE 20
void readThemAll(const int *a, int lower, int higher)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (*(a+i) > lower && *(a+i) < higher)
		{
			printf("%d\t", *(a + i));
		}
	}
}
int main()
{
	int a[SIZE];
	srand(time(0));
	printf("The array is\n");
	for (int i = 0; i < SIZE; i++)
	{
		a[i] = rand() % 100;
		printf("%d\t", a[i]);
	}
	int lower, higher;
	printf("\nENter the lower value: ");
	scanf("%d", &lower);
	printf("ENter the higher value: ");
	scanf("%d", &higher);

	readThemAll(a, lower, higher);
}