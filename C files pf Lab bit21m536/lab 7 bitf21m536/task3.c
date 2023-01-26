#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

long convertDays(int day, int month, int year)
{
	return (year * 10000) + (month * 100) + (day);
}


int main()
{
	int day, month, years;
	do
	{
		printf("Enter the number of days: ");
		scanf("%d", &day);
	} while (day < 0 || day>30);
	
	do
	{
		printf("Enter the number of month: ");
		scanf("%d", &month);
	} while (month < 0 || month>12);
	do
	{
		printf("Enter the number of years: ");
		scanf("%d", &years);
	} while (years < 0);
	


	printf("the number of days are: %ld", convertDays(day, month, years));

	return 0;
}