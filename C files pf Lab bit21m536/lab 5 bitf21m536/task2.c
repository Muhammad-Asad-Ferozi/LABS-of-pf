#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int base10, rem, reverse = 0, base9 = 0;
	printf("Enter the base 10 number: ");
	scanf("%d", &base10);
	while (base10 > 0)
	{
		rem = base10 % 9;
		reverse = (reverse * 10) + rem;
		base10 = base10 / 9;
	}
	while (reverse > 0)
	{
		rem = reverse % 10;
		base9 = (base9 * 10) + rem;
		reverse = reverse / 10;
		
	}
	printf("Base9 equivilent is: %d", base9);
}