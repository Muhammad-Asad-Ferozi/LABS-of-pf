#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 50
void count(char str[])
{
	int countAlphabet=0, countDigit=0;
	int i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			countAlphabet++;
		else if (str[i] >= '0' && str[i] <= '9')
			countDigit++;
		i++;
	}
	printf("%s has %d alphabets and %d digits", str, countAlphabet, countDigit);
}
int main()
{
	char str[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		str[i] = getchar();
		if (str[i] == 10)
		{
			str[i] = '\0';
			break;

		}
	}
	count(str);
}