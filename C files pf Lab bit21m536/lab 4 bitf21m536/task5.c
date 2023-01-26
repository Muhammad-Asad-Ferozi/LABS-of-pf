#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int binaryNum =0, deciNum = 0, rem, base = 1;
	printf("Enter the binary number: ");
	scanf("%d", &binaryNum);
	while(binaryNum>0)
	{
		rem = binaryNum % 10;
		binaryNum = binaryNum / 10;
		deciNum = deciNum + (rem * base);		//formulating decimal number
		base = base * 2;			// 2^0 = 1 & 2^1 = 2 & 2^2=4 & 2^3 = 6
	}
	printf("Its decimal equivalent is: %d", deciNum);
	return 0;
}