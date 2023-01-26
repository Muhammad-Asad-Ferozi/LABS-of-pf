#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int largerNumber(int num1, int num2)
{
	if (num1 < num2)
	{
		return num2;
	}
	else
	{
		return num1;
	}
}
int main()
{
	int num1, num2;
	printf("Enter the first number: ");
	scanf("%d", &num1);
	printf("Enter the second number: ");
	scanf("%d", &num2);


	printf("the larger number is: %d", largerNumber(num1, num2));
}