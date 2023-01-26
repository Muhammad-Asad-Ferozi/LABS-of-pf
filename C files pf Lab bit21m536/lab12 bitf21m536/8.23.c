#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define S1 200
int main()
{

	char arr[S1];
	char* temparray;
	char ch;

	printf("Enter any string : ");
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

	printf("word starting with letter b : ");
	char temp1[10];

	strcpy(temp1, strtok(arr, " "));
	while (temp1 != NULL)
	{
		if(temp1[0]=='b')
			printf("%s ", temp1);
		strcpy(temp1, strtok(NULL, " "));
	}
	return 0;
}