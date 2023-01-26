#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float chargeHours(float h)
{
	float charge = 0;
	if (h <= 3.00 && h > 0.00)
	{
		charge = 2;
	}
	else if (h <= 24.00 && h > 3.00)
	{
		charge = 2;
		for (int i = 3; i < h; i++)
		{
			charge = charge + 0.5;
		}
	}
	else
	{
		printf("invalid hours!! \n");
	}
	return charge;
}
int main()
{
	float hours, charge1, charge2, charge3, hour1 = 0, hour2 = 0, hour3 = 0;
	int count = 1;
	for (int i = 1; i <= 3; i++)
	{
		printf("Enter the hours: ");
		scanf("%f", &hours);
		if (count == 1)
		{
			hour1 = hours;
			charge1 = chargeHours(hours);
		}
		if (count == 2)
		{
			hour2 = hours;
			charge2 = chargeHours(hours);
		}
		if (count == 3)
		{
			hour3 = hours;
			charge3 = chargeHours(hours);
		}
		count++;
	}
	
	printf("cars\t\thours\t\tcharges\n");
	printf("1\t\t%.2f\t\t%.2f\n", hour1, charge1);
	printf("2\t\t%.2f\t\t%.2f\n", hour2, charge2);
	printf("3\t\t%.2f\t\t%.2f\n", hour3, charge3);
	float hourSum = hour1 + hour2 + hour3;
	float chargeSum = charge1 + charge2 + charge3;
	printf("Total\t\t%.2f\t\t%.2f", hourSum, chargeSum);

	return 0;
}