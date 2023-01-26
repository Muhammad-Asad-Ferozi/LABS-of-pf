#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main()
{
	//declearing the variables
	char fileName[10];
	//Defining the variable
	printf("ENter the name of file : ");
	scanf("%s", fileName);
	//calculating....
	char* p1 = fopen(fileName, "ab");

	for (int i = 0; i < 100; i++)
	{
		fwrite( &i, sizeof(i), 1,p1);
	}

	fclose(p1);
	//showing results
}