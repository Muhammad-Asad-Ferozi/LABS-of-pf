#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 100
int strlen1(char arr[])
{
	int count = 0;
	int i = 0;
	while (arr[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}
int strlen2(char* p)
{
	int i = 0;
	while (*p != '\0')
	{
		p++;
		i++;
	}
	return i;
}

int main()
{

	return 0;
}
