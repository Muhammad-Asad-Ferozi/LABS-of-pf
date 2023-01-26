#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float fallingDistance(int time)
{
	return ((9.8 * time * time) / 2);
}
int main()
{
	for (int i = 1; i <= 10; i++)
	{
		printf("the time is: %d\n", i);
		printf("the distance is: %.2f m\n", fallingDistance(i));
	}
	return 0;
}