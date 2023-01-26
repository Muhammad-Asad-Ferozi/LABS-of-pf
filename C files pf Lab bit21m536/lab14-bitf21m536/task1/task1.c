#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	//declearing the variables
	char fileName[10];
	//Defining the variable
	printf("ENter the name of file of which you want to count line or characters: ");
	scanf("%s", fileName);
	//calculating....
	char* p1 = fopen(fileName, "r");
	if (p1 == NULL)
	{
		printf("File not open");
		exit();
	}

	//counting the character
	fseek(p1, -1, SEEK_END);
	int countChar = ftell(p1);


	//counting the lines
	fseek(p1, 0, SEEK_SET);
	int counterLine = 0;

	char temp[100];
	while (!feof(p1))
	{
		fgets(temp, 100,p1);
		counterLine++;
	}
	fclose(p1);
	//showing results

	printf("The number of character in file %s is %d", fileName, countChar);
	printf("\nThe number of line in file %s is %d", fileName, counterLine);
}