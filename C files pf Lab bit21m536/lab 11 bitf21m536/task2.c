#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define S1 50
#define S2 10

int main()
{
	int a[S1];
	int even[S1];
	int ev=0;
	int odd[S1];
	int od=0;
	srand(time(0));
	for (int i = 0; i < S1; i++)
	{
		
		*(a + i) = 1 + (rand() % 200);
		if (*(a + i) % 2 == 0)
		{
			*(even + ev) = *(a + i);
			ev++;
		}
		else if(*(a + i) % 2 != 0)
		{
			*(odd + od) = *(a + i);
			od++;
		}
	}
	printf("\nEven\n");
	for (int i = 0; i < od; i++)
	{
		printf("%d, ", *(even + i));
	}
	printf("\nOdd\n");
	for (int i = 0; i < od; i++)
	{
		printf("%d, ", *(odd + i));
	}
}