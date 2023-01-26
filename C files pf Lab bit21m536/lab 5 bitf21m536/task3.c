#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	 int num, sum = 0, rem, digit = 0, num1 = 0;
	printf("Rnter the number:");
	scanf("%d", &num);
	if (num < 0)
	{
		num = -num;
	}
	while (num > 0) {
		rem = num % 10;
		num = num / 10;
		num1 = num1 * 10 + num;
		sum = sum + rem;
		digit++;
	 }
	printf("Sum of digits : %d", sum);
	printf("\nNumber of digits are: %d", digit);
	return 0;
}