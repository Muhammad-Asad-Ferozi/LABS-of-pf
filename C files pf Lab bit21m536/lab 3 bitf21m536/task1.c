//comparing area of two rectangles
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//defining valriables
	float length1, length2, width1, width2;
	float area1, area2;
	
	//etering the values
	printf("Enter the length of first rectnagle: ");
	scanf("%f", &length1);
	printf("Enter the width of first rectnagle: ");
	scanf("%f", &width1);
	printf("\nEnter the length of second rectnagle: ");
	scanf("%f", &length2);
	printf("Enter the width of second rectnagle: ");
	scanf("%f", &width2);

	//performing calculations
	area1 = length1 * width1;
	area2 = length2 * width2;

	//showing results
	if (area1 > area2)
	{
		printf("\nthe area of first rectangle is larger than area of second rectangle.");
	}
	else if (area2 > area1)
	{
		printf("\nthe area of second rectangle is larger than area of first rectangle.");
	}
	else
	{
		printf("\nthe area of both rectangle are same.");
	}
	return 0;
}
