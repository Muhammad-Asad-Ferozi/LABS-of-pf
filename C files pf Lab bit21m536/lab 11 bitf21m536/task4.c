#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define S1 200
#define S2 10

// digit of mother array is sepreate and printed here
void digit(char* MA)
{
	int digitArray[S1];
	int da=0;
	
	for (int i = 0; i < S1; i++)
	{
		if (*(MA+i) == '0')
		{
			digitArray[da] = 0;
			da++;
		}
		else if (*(MA + i) == '1')
		{
			digitArray[da] = 1;
			da++;
		}
		else if (*(MA + i) == '2')
		{
			digitArray[da] = 2;
			da++;
		}
		else if (*(MA + i) == '3')
		{
			digitArray[da] = 3;
			da++;
		}
		else if (*(MA + i) == '4')
		{
			digitArray[da] = 4;
			da++;
		}
		else if (*(MA + i) == '5')
		{
			digitArray[da] = 5;
			da++;
		}
		else if (*(MA + i) == '6')
		{
			digitArray[da] = 6;
			da++;
		}
		else if (*(MA + i) == '7')
		{
			digitArray[da] = 7;
			da++;
		}
		else if (*(MA + i) == '8')
		{
			digitArray[da] = 8;
			da++;
		}
		else if (*(MA + i) == '9')
		{
			digitArray[da] = 9;
			da++;
		}
	}
	printf("\nThe digits of array are: ");
	for (int i = 0; i < da; i++)
	{
		printf("%d, ", *(digitArray + i));
	}
	printf("\n");
}
void alphabetSpace(char* MA)
{
	char digitArray[S1];
	int da = 0;

	for (int i = 0; i < S1; i++)
	{
		if ((*(MA + i) >= 'a' && *(MA + i) <= 'z') || (*(MA + i) >= 'A' && *(MA + i) <= 'Z') || (*(MA + i) == 32))
		{
			digitArray[da] = *(MA + i);
			da++;
		}
	}
	digitArray[da] = '\0';
	printf("The alphabet and space of array are: %s\n", digitArray);
}
void upperCase(char* MA)
{
	char digitArray[S1];
	int da = 0;

	for (int i = 0; i < S1; i++)
	{
		if (*(MA + i) >= 'a' && *(MA + i) <= 'z')
		{
			digitArray[da] = *(MA + i) -32;
			da++;
		}
	}
	digitArray[da] = '\0';
	printf("The upperCase of array are: %s\n", digitArray);
}

int main()
{
	char motherArray[S1];
	
	printf("Enter the string:\n");
	for (int i = 0; i < S1; i++)
	{
		motherArray[i] = getchar();
		if (motherArray[i] == 10)
		{
			motherArray[i] = '\0';
			break;
		}
	}
	digit(motherArray);
	alphabetSpace(motherArray);
	upperCase(motherArray);

}