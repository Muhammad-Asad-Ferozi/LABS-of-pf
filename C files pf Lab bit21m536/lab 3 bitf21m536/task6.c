//Check weather the triangle is right or not
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	//defining variales
	float length1, length2, length3;

	//Entering vlues
	printf("Enter the first length of triangle: ");
	scanf("%f", &length1);
	printf("Enter the second length of triangle: ");
	scanf("%f", &length2);
	printf("Enter the third length of triangle: ");
	scanf("%f", &length3);

	//showing results
	if ((length1 * length1) == ((length2 * length2) + (length3 * length3)))
	{
		printf("The triangle is right angle triangle");
	}
	else if ((length2 * length2) == ((length3 * length3) + (length1 * length1)))
	{
		printf("The triangle is right angle triangle");
	}
	else if ((length3 * length3) == ((length1 * length1) + (length2 * length2)))
	{
		printf("The triangle is right angle triangle");
	}
	else
	{
		printf("The trianggle is not right angle triabgle");
	}
	return 0;
}