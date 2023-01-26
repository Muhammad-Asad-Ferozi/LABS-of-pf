#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define SIZE 200
void copyString(char* ptr1, char const* ptr2)
{

	int i = 0;
	while (*(ptr2 + i) != 0)
	{
		*ptr1 = *ptr2;
		ptr1++;
		ptr2++;
	}
}
void concatString(char* ptr1, char const* ptr2)
{
	int i = 0;
	int j = 0;
	while (*(ptr1 + i) != 0)
	{
		i++;
	}
	*(ptr1 + i) = ' ';
	i++;
	while (*(ptr2 + j) != 0)
	{
		*(ptr1 + i) = *(ptr2 + j);
		j++;
		i++;
	}
	*(ptr1 + i) = '\0';
}
int main()
{
	return 0;

}