
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define SIZE 30

int strCompare(char const* str1, char const* str2);
int strComparePortion(char const* str1, char const* str2, int size);
int main()
{
	return 0;
}
int strCompare(char const* str1, char const* str2)
{
	int count, l1, l2;
	count = l1 = l2 = 0;
	while (*(str1 + count) != 0)
		count++;
	l1 = count;
	count = 0;
	while (*(str2 + count) != 0)
		count++;
	l2 = count;
	count = 0;
	if (l1 > l2)
		return 2;
	else if (l1 < l2)
		return 3;
	else
	{
		while (*(str1 + count) != 0)
		{
			if (*(str1 + count) != *(str2 + count))
			{
				return 4;
			}
			count++;
		}
		return 1;
	}
}
int strComparePortion(char const* str1, char const* str2, int size)
{
	int count, l1, l2;
	count = l1 = l2 = 0;
	while (*(str1 + count) != 0)
		count++;
	l1 = count;
	count = 0;
	while (*(str2 + count) != 0)
		count++;
	l2 = count;
	count = 0;
	if (l2 < size)
		return -1;
	else if (l1 < size)
		return 1;
	else
	{
		while (*(str1 + count) != 0 && count < size)
		{
			if (*(str1 + count) != *(str2 + count))
			{
				return -99;
			}
			count++;
		}
		return 0;
	}
}