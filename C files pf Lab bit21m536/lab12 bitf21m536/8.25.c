#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num;
	printf("Enter ASCII number >");
	scanf("%d", &num);
	char ch = num;
	printf("%d is: (%c)\n\n\n", num, ch);
	return 0;
}
