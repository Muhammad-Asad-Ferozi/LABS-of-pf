#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num, num1, larger, secondLarger, loopRun = 3, i= 2;
	do								//ceating loop for x<2 number
	{
		printf("Enter the number (>= 2): ");
		scanf("%d", &num);

		if (num < 2)
		{
			printf("Error: invalid input!!\n");
		}
	} while (num < 2);
	printf("Enter the number 1: ");
	scanf("%d", &num1);				//enter the number
	larger = num1;					//put num = largest
	secondLarger = num1 - num1;		//make second number = 0
	while (i <= loopRun +1)							//because now we are entering 2rd number
	{
		printf("Enter the number %d: ", i);				
		scanf("%d", &num1);
		if (num1 >= larger)
		{
			if (larger > secondLarger);			//because if num1 >  num2
			{
				secondLarger = larger;
			}
			larger = num1;
		}
		else if (num1 < larger)
		{
			if (num1 < secondLarger)		//because if num2 < num1 then secondlargest != num2
			{

			}
			else
			{
				secondLarger = num1;
			}
		}
		i = i + 1;
	}
	printf("the larger number is: %d\n", larger);
	printf("the second larger number is: %d", secondLarger);
	return 0;
}