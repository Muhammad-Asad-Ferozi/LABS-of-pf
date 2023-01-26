#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 200
#define TEXT 20

int main()
{
	//declearing the variables
	char motherText[SIZE];
	char text[TEXT];


	//Entering data in mother string
	printf("ENter data in mother string: ");
	int i = 0;
	char temp;

	temp = getchar();
	while (temp != 10)
	{
		motherText[i] = temp;
		i++;
		temp = getchar();
	}
	motherText[i] = '\0';
	printf("The enterd string is:\n%s", motherText);

	//Entering data in smaller string
	printf("\n\nENter data in smaller string: ");
	i = 0;
	temp = getchar();
	while (temp != 10)
	{
		text[i] = temp;
		i++;
		temp = getchar();
	}
	text[i] = '\0';
	printf("\n\nThe enterd string is:\n%s\n\n", text);

	
	//processing
	int l = strlen(text);

	char* ptr = motherText;
	i = 0;
	printf("%s\n", strstr(ptr + i, text));
	while (strstr(ptr+i, text) != NULL)
	{
		//strcpy(ptr, ptr + i);
		if (strstr(ptr + i, text) == strstr(ptr + i - 1, text))
		{
			i++;
			continue;
		}
		printf("%s\n", strstr(ptr+i, text));
		i++;
	}
}