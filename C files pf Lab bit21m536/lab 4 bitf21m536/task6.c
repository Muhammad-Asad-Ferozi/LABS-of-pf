#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h> //To use power operator
int main()
{
	int baseNum7, base10 = 0, base=7, power= 0;
	do
	{
		printf("Enter the Base_7 digit: ");
		scanf("%d", &baseNum7);
		if (baseNum7 != -1)
		{
			base10 = base10 + (baseNum7 * pow(base, power));
			power = power + 1;
		}
	} while (baseNum7 != -1);
	printf("Its decimal equivalent is: %d", base10);
}