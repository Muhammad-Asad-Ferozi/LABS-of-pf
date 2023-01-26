#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int base9, base10Num, base9Num = 0, i = 0, j = 0;
	printf("Enter the decimal number: ");
	scanf("%d", &base10Num);
	printf("The equvilent numberr in base 9 is: ");
	while (base10Num > 0)
	{
		base9 = base10Num % 9;
		base10Num = base10Num - base9;
		base10Num = base10Num / 9;
		base9Num = (base9Num * 10) + base9;			//base9num = 8621 for (953)_10
		i = i + 1;			 						//for uning i in second loop
	}
	while (j < i)
	{
		base9 = base9Num % 10;
		base9Num = base9Num / 10;
		printf("%d", base9);					//base9 = 1268 for (953)_10
		j = j + 1;
	}
	return 0 (i++, i<500, )
		namespace 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
		int main()
	{
		int num, num1, larger, secondLarger, loopRun = 3, i = 2;
		do								//ceating loop for x<2 number
		{
			printf("Enter the number (>= 2): ");
			scanf("%d", &num);

			if (num < 2)
			{
				printf("Error: invalid input!!\n");
			}
		} while (num < 2);
		printf("Enter the number 1: ");
}