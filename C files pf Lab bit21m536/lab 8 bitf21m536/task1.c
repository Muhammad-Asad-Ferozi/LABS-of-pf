#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 10

void printName()
{
	char name[SIZE] = { 'a','s','a','d','\0' };
	for (int i = 0; i < 10; i++)
	{
		printf("%c", name[i]);
	}
	printf("\n%s", name);
}
void compare(char ary1[], char ary2[])
{
	int count = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (ary1[i] == ary2[i])
		{
			count++;
		}
	}
	if (count == SIZE)
	{
		printf("ARRay are equal");
	}
	else
		printf("arry are not equal");
}
void reverse(char ary1[], int size)
{
	int n = 0;
	char reverse[4];
	for (int i = 3; i >= 0 ; i--)
	{
		reverse[n] = ary1[i];
		n++;
	}
		printf("reverse  ");
	for (int i = 0; i < 4; i++)
	{
		printf("%c", reverse[i]);
	}
}
void copy(char ary1[], int size)
{
	int aryCopy[4];
	for (int i = 0; i < 4; i++)
	{
		aryCopy[i] = ary1[i];
	}
	for (int i = 0; i < 4; i++)
	{
		printf("%c", aryCopy[i]);
	}
}
void findChar(char ary1[], int size)
{
	char find;
	printf("ENter the caharcter to find: ");
	scanf("%c", &find);
	getchar();
	int flag = 0;
	for (int i = 0; i < 4; i++)
	{
		if (find == ary1[i])
		{
			flag = 1;
			break;
		}
	}
	if (flag == 1)
	{
		printf("Character is present in array");
	}
	else
	{
		printf("Character is not present in array");
	}
}
int main()
{
	char ary1[4] = {'d','a','s','a'};
	//printf("ENter the name in first array: ");
	//scanf("%s", ary1);
	//char ary2[SIZE];
	//printf("ENter the name in second array: ");
	//scanf("%s", ary2);
	reverse(ary1, 4);
	findChar(ary1, 4);
}