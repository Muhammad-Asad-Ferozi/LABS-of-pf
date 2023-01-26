#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int palindrome(int num)
{
	int rem, reverse = 0;
	int originalNumber = num;
	while (num > 0)
	{
		rem = num % 10;
		num = num / 10;
		reverse = reverse * 10 + rem;
	}
	if (reverse == originalNumber)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int number;
	printf("enter the number to check palaindrome: ");
	scanf("%d", &number);
	int check = palindrome(number);
	if (check == 1)
		printf("the number %d is plainderome", number);
	else
		printf("the number %d is not palindrome", number);
	return 0;
}