#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num, rem, count =0;
	printf("enter the number: ");
	scanf("%d", &num);

	while (num > 0) {
		rem = num % 10;
		num = num / 10;
		switch (rem)
		{
		case 6: {
			count++;
			break;
		}
		default: {

		}

		}
	}
	printf("number of 6s in number entered is: %d", count);
}