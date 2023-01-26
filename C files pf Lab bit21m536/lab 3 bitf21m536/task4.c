//input three numbers and how which number is grater
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//defining variables
	int num1, num2, num3;

	//entering values
	printf("Enter the number 1: ");
	scanf("%d", &num1);
	printf("Enter the number 2: ");
	scanf("%d", &num2);
	printf("Enter the number 3: ");
	scanf("%d", &num3);

	//showing results
	if (num1 > num2 && num1 > num3)
	{
		printf("\ngrater %d", num1);
	}
	else if (num2 > num1 && num2 > num3)
	{
		printf("\ngrater number%d", num2);
	}
	else
	{
		printf("\ngrater number %d", num3);
	}

	return 0;
}