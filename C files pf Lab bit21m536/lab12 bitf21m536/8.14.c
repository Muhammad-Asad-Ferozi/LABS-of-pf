#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define S1 15
int main()
{
	char phoneNumber[S1];
	char areaCodeNumber[S1];
	char lastNumber[S1];
	char centerNumber[S1];
	int areaCodeNumberInteger;

	printf("Enter your Phone Number ignoring the symbols and brackets : ");
	for (int j = 0; j < S1-1; j++)
	{
		if (j == 0)
		{
			phoneNumber[j] = '(';
			continue;
		}
		else if (j == 4)
		{
			phoneNumber[j] = ')';
			continue;
		}
		else if (j == 5)
		{
			phoneNumber[j] = ' ';
			continue;
		}
		else if (j == 9)
		{
			phoneNumber[j] = '-';
			continue;
		}
		phoneNumber[j] = getchar();
	}
	phoneNumber[S1-1] = '\0';
	printf("\nPhone Number : ");
	for (int i = 0; i < S1; i++)
	{
		printf("%c", phoneNumber[i]);
	}

	strcpy(areaCodeNumber, strtok(phoneNumber, ")"));
	strcpy(centerNumber, strtok(NULL, "-"));
	strcpy(lastNumber, strtok(NULL, " "));
	char temp;
	int i = 0;
	for (int i = 0; i < 4; i++)
	{
		areaCodeNumber[i] = areaCodeNumber[i + 1];
		if (i == 3)
		{
			areaCodeNumber[i] = '\0';
		}
	}
	for (int i = 0; i < 4; i++)
	{
		centerNumber[i] = centerNumber[i + 1];
		if (i == 3)
		{
			centerNumber[i] = '\0';
		}
	}
	printf("\nArea code = %s\n", areaCodeNumber);
	printf("Last No = %s\n", lastNumber);
	printf("Center No = %s\n", centerNumber);
	strcat(centerNumber, lastNumber);
	printf("\nInterger value of center and last No is %d", atoi(centerNumber));
	areaCodeNumberInteger = atoi(areaCodeNumber);
	printf("\nInteger value of Area Code is %d", areaCodeNumberInteger);

	return 0;

}