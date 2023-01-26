#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int l = 0;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("0");
		}
		for (int k = 0; k < 6 -l; k++)
		{
			printf("1");
		}
		l++;
		printf("\n");
	}
	return 0;
}