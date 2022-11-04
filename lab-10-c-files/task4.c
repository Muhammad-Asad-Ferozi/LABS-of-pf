#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 10
void upperCase(char* arr)
{
	for (int i = 0; arr[i] != '\0'; i++)
	{
		*(arr + i) = *(arr + i) - 32;
		printf("%c", *(arr + i));
	}
}
int main()
{
	char arr[SIZE] = { "pakistan" };
	upperCase(arr);
}