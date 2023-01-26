#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, d, n, loopRun = 0;
	printf("enter the first number of sequence: ");
	scanf("%d", &a);
	printf("enter the common difference of sequence: ");
	scanf("%d", &d);
	printf("enter the number of term of sequence of sequence: ");
	scanf("%d", &n);
	while (loopRun < n)
	{
		printf("%d ", a);	
		a = a + d;
		loopRun = loopRun + 1;
	}
	return 0;
}