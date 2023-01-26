#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

float population(float P, float B, float D)
{
	double N;

	return  (P + B * P) - (D * P);
}

int main() {
	float p, b, d, y;
	printf("Enter the number of years: ");
	scanf("%f", &y);

	for (int i = 1; i <= y; i++)
	{
		printf("\nEnter the data of %d year\n", i);
		printf("enter the size of population: ");
		scanf("%f", &p);
		printf("enter the annual birth rate: ");
		scanf("%f", &b);
		printf("enter the annual death rate: ");
		scanf("%f", &d);

		printf("New population is %.1f\n", population(p, b, d));
	}
	
	return 0;


}