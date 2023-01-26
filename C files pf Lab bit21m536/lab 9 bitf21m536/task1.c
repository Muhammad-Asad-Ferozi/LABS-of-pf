#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void replace(char str[], char c1, char c2)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c1)
		{
			str[i] = c2;
		}
		i++;
	}
	printf("%s", str);
}

int main()
{
	char str[] = "This_is_a_line";
	char c1 = '_';
	char c2 = 32;
	replace(str, c1, c2);
	return 0;
}