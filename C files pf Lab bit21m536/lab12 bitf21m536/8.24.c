#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define S1 200
int main()
{

	char arr[S1];
	char* temparray;
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
	printf("Strings ending with ed is : ");

	int count = 0;
	for (int i = 0; i < S1; i++)
	{
		if (i == 0)
		{

			temparray = strtok(arr, " ");
			count = 0;
			while (temparray[count] != 0)
			{
				count++;
			}
			if (temparray[count - 2] == 'e' && temparray[count - 1] == 'd')
				printf("%s, ", temparray);
		}
		temparray = strtok(NULL, " ");
		count = 0;
		while (temparray[count] != 0)
		{
			count++;
		}
		if (temparray[count - 2] == 'e' && temparray[count - 1] == 'd')
			printf("%s, ", temparray);

	}
	return 0;
}