#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int marks;
	printf("Enter the obtained marks out of 100: ");
	scanf("%d", &marks);

	if (marks >= 50 && marks <= 100)
	{
		printf("Student is passed");
	}
	else if (marks >= 0 && marks < 50)
	{
		printf("Student is failed");
	}
	else
	{
		printf("Invalid numbers:\nEnter marks between 100 and 0");
	}
}