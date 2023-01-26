#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void convertTime(int inputSec, int *hour, int *min, int *sec)
{
	*hour = inputSec / 3600;
	inputSec = inputSec - (*hour * 3600);
	*min = inputSec / 60;
	*sec = inputSec - (*min * 60);
}

int main()
{
	int inputSec, hours = 0, min = 0, sec = 0;
	do
	{
		printf("Enter the number of input seconds: ");
		scanf("%d", &inputSec);
	} while (inputSec < 0);
	convertTime(inputSec, &hours, &min, &sec);
	printf("\thours\t:\tmin\t:\tsec\n");
	printf("\t%d\t:\t%d\t:\t%d", hours, min, sec);
	return 0;
}