#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void main()
{
	//declearing the variables
	char fileName[10];
	//Defining the variable
	printf("ENter the name of file to read the content: ");
	scanf("%s", fileName);
	//calculating....
	char* p1 = fopen(fileName, "r");
	if (p1 == NULL)
	{
		printf("File not open");
		exit();
	}

	char text[1000];
	int i = 0;
	while (!feof(p1))
	{
		text[i] = fgetc(p1);
		i++;
	}
	text[i] = '\0';
	fclose(p1);

	
	//showing results
	char outputFile[10];
	printf("Enter the name of file to write content in reverse order: ");
	scanf("%s", fileName);

	char* p2 = fopen(fileName, "w");
	fprintf(p2, "%s", _strrev(text));
	fclose(p2);

}