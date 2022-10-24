#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int presentValue(int futureVlaue, float inturestRate, int time)
{
	return (futureVlaue) / pow(1 + inturestRate, time);
}
int main()
{
	int futurevalue, time;
	float inturestRate;
	printf("Enter the future amount: ");
	scanf("%d", &futurevalue);
	printf("Enter the the time in year: ");
	scanf("%d", &time);
	printf("Enter the inturest rate: %%");
	scanf("%f", &inturestRate);
	inturestRate = inturestRate / 100;
	

	printf("the present value of deposit is: %d", presentValue(futurevalue, inturestRate, time));
	return 0;
}