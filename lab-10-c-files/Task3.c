#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 10
void copyIntArray(int* dest, const int* src, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + size) = '\0';
	for (int i = 0; i < size; i++)
	{
		printf("%d", *(dest + i));
	}
}
int main()
{
	int scr[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int dest[SIZE];
	int size;
	printf("the original arry is: ");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d", scr[i]);
	}
	printf("\nEnter the index for which you want to copy array: ");
	scanf("%d", &size);

	copyIntArray(dest, scr, size);
}