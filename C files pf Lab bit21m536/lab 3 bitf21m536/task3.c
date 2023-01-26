//Take two number tell which number is grater using if statemr=ent
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//defining variables
	int num1, num2;

	//entering values
	printf("Enter the number 1: ");
	scanf("%d", &num1);
	printf("Enter the number 2: ");
	scanf("%d", &num2);

	//showing results
	if (num1 > num2)
	{
		printf("\nnumber 1 = %d and number2 = %d. So number 1 is greater than number 2:", num1, num2);
	}
	else if (num1 < num2)
	{
		printf("\nnumber 1 = %d and number2 = %d. So number 2 is greater than number 1:", num1, num2);
	}
	else
	{
		printf("\nBoth numbers are equal:number 1 %d = number 2 %d", num1, num2);
	}
	return 0;
}