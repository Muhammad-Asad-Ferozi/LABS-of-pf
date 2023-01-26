#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num, times = 0, smallest , middle, largest;
	printf("Enter the number1: ");
	scanf("%d", &num);
	largest = num;
	smallest = num;
	middle = num;

	while (times < 2)
	{
		printf("Enter the number: ");
		scanf("%d", &num);
		if (num > largest)
		{
			if(smallest == middle)
				middle= largest;
			largest = num;
		}
		else if (num < smallest)
		{
			if (middle == largest)
				middle = smallest;
			smallest = num;
		}
		else if (num<largest && num>smallest)
		{
			middle = num;
		}
		times = times + 1;
	}
	printf("Number in accesnding order is: %d %d %d", smallest, middle, largest);
	return 0;
}