#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isValid(int length, int start, int end)
{
	int valid;
	if (length >= start && length <= end)
		valid = 1;
	else
	{
		valid = 0;
		printf("Invalid number\n");
	}
	return valid;
}

int getLength() {
	int length=0;
	do
	{
		printf("Enter the length of rectangle(5-500): ");
		scanf("%d", &length);
	} while (isValid(length, 5, 500) == 0);
	return length;
}

int getWidth() {
	int width =0;
	do
	{
		printf("Enter the width of rectangle(8-200): ");
		scanf("%d", &width);
	} while (isValid(width, 8, 200) == 0);
	return width;
}

int caculateArea(int length, int width)
{
	return length * width;
}

void displayArea(int area)
{
	printf("the area of rectangle is: %d", area);
}




int main()
{
	displayArea(caculateArea(getLength(), getWidth()));
	return 0;
}