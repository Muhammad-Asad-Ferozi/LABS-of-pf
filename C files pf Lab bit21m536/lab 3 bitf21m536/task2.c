//Show the points number of point after purachsing number of books
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int numBooks;
	printf("enter the number of books to purchase in each points: ");
	scanf("%d", &numBooks);
	if (numBooks == 0)
	{
		printf("you purchase %d books. So, your number of points are 0", numBooks);
	}
	else if (numBooks == 1)
	{
		printf("you purchase %d books. So, your number of points are 5", numBooks);
	}
	else if (numBooks == 2)
	{
		printf("you purchase %d books. So, your number of points are 15", numBooks);
	}
	else if (numBooks == 3)
	{
		printf("you purchase %d books. So, your number of points are 30", numBooks);
	}
	else if (numBooks >3)
	{
		printf("you purchase %d books. So, your number of points are 30", numBooks);
	}
	else
	{
		printf("invalid number:\nPlease enter a valid positive number.");

	}
	return 0;
}