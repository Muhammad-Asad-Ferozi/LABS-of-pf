#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	FILE* ptr;
	ptr = fopen("test1.txt", "w");
	fprintf(ptr, "%s %d", "This is my laptop this is beautiful", 1);
	fclose(ptr);
	char copy[100];
	char ch;

	ptr = fopen("test1.txt", "r");
	if (NULL == ptr)
	{
		printf("File not open");
	}
	fscanf(ptr, "%s", copy);
	printf("Content of file are:\n");
	do
	{
		ch = fgetc(ptr);
		printf("%c", ch);

	} while (ch!= EOF);



	fclose(ptr);

	printf("%s", copy);
}