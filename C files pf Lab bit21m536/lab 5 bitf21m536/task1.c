#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	long int sum = 0, loopRun;
	printf("Enter the number where you find to sum of cubes of number: ");
	scanf("%d", &loopRun);
	for (int i = 1; i <= loopRun; i++)
	{
		sum = sum + (i * i * i);
	}
	printf(" Sum = %d", sum);
}