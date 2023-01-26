#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void printAddressValue(const char* ch)
{
	for (int i = 0; ch[i] != '\0'; i++)
	{
		printf("%p\t", (ch+i));
		printf("%c\n", *(ch + i));
	}
}
int main()
{
	char ar[10] = { "pakistan" };
	printAddressValue(ar);
}