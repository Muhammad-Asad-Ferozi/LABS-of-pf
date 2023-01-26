#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int years;
	float rainFall, totalRainFall = 0, avgRainFall;
	printf("ENter the number of years: ");
	scanf("%d", &years);
	while (years <= 0) {
		printf("please enter number > 0 !!!!\n");
		printf("ENter the number of years: ");
		scanf("%d", &years);
	}

	for (int i = 1; i < years+1; i++)
	{
		printf("\nNow Enter the rain of '%d' year \n", i);
		for (int j = 1; j <= 12; j++)
		{
			printf("Enter the amount of rain fall in %d month", j);
			scanf("%f", &rainFall);
			if (rainFall > 0)
			{
				totalRainFall = totalRainFall + rainFall;
			}
			else
			{
				printf("invalid number to enter the rain fall\n");
			}
		}
	}
	printf("\n\nThe total number of month: %d", (years * 12));
	printf("\ntotal rain Fall in inchec id: %.2f", totalRainFall);
	avgRainFall = totalRainFall / (years * 12);
	printf("\naverage rain fall in one month on entire peroid is is: %.2f", avgRainFall);

}