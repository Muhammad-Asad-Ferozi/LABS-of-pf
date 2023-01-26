#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void Recursion(unsigned long long int num1, unsigned long long int num2, unsigned long long int Series) {
	unsigned long long int power = pow(2, 64) - 1; // bracue the value remain in the limit of unsigned long long int
	if (Series < power) {
		Series = num1 + num2;
		num1 = num2;
		num2 = Series;
		Recursion(num1, num2, Series);
	}
	else
	{
		printf("The Greatest Number in Series is %llu", Series);
	}
}
int main() {
	unsigned long long int a = 0, b = 1, c = 0;
	Recursion(a, b, c);
	return 0;
}