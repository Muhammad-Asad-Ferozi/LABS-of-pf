#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define SIZE 100

int main()
{
	char arr[SIZE];
	printf("ENter the string:\n");
	int i = 0;
	char temp;

	temp = getchar();
	while (temp != 10)
	{
		arr[i] = temp;
		i++;
		temp = getchar();
	}
	arr[i] = '\0';
	
	printf("%s \n", arr);
	_strrev(arr);
	char temp1[10];

	strcpy(temp1, strtok(arr, " "));
	while (temp1 != NULL)
	{
		_strrev(temp1);
		printf("%s ", temp1);
		strcpy(temp1, strtok(NULL, " "));
	}
	return 0;
}
