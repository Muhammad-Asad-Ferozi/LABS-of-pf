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
	char* p1 = fopen(fileName, "r");
	if (p1 == NULL)
	{
		printf("File not open");
		exit();
	}

	//counting the character
	fseek(p1, +3, SEEK_END);
	int index2 = ftell(p1);

	fseek(p1, 0, SEEK_END);
	int index3 = ftell(p1);

	//counting the lines
	fseek(p1, -3, SEEK_SET);
	int index1 = ftell(p1);

	fseek(p1, 0, SEEK_SET);
	int index4 = ftell(p1);
	
	fclose(p1);
	//showing results

	printf("The index of file when we move -3 before the start of file is: %d", index1);
	printf("\nThe index of file when we move +3 after the end of file is: %d", index2);
	printf("\nThe index of file when at the end of file is: %d", index3);
	printf("\nThe index of file when at the start of file is: %d", index4);


	/*This mean that when go beyond the star point it return the length of file 
	if go after the end point then index goes forward*/
}