#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int number, dig1, dig2, dig3, dig4, dig5, i = 0;
	char againRun;
	do
	{
		printf("\nEnter the five digit number: ");
		scanf("%d", &number);					//seperating digits
		dig5 = number % 10;
		number = number / 10;
		dig4 = number % 10;
		number = number / 10;
		dig3 = number % 10;
		number = number / 10;
		dig2 = number % 10;
		number = number / 10;
		dig1 = number % 10;

		if (dig1 == dig5 && dig2 == dig4)			// comparining digits
		{
			printf("%d%d%d%d%d is a palindorme:", dig1, dig2, dig3, dig4, dig5);
		}
		else
		{
			printf("%d%d%d%d%d is not a palindorme:", dig1, dig2, dig3, dig4, dig5);
		}
		printf("\nDo you wnat to continoue(Y/N)?");			//working on condition so that loop run again or not
		getchar();
		scanf("%c", &againRun);
	} while (againRun == 'Y' || againRun == 'y');
	printf("\nBYe Bye !!\n");
}