#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

float arrtofloat(const char* nptr)
{
	int i = 0, flag = 0;
	long int  num = 0, multiplier = 1, decimal = 0;
	float result = 0, deci = 0;
	while (*(nptr + i) != 0)
	{
		num = num * 10 + (*(nptr + i) - '0');
		i++;
		if (*(nptr + i) == '.')
		{
			flag = 1;
			break;
		}
	}
	if (flag)
	{
		i++;
		int count = 0;
		while (*(nptr + i) != 0 && count < 7)
		{
			count++;
			multiplier = multiplier * 10;
			decimal = decimal * 10 + (*(nptr + i) - '0');
			i++;
		}
		deci = (float)decimal / multiplier;
		result = num + deci;
	}
	else
	{
		result = num;
	}
	return result;
}
long strtolong(const char* nptr)
{

	int i = 0;
	long int num = 0;
	while (*(nptr + i) != 0)
	{
		num = num * 10 + (*(nptr + i) - '0');
		i++;
		if (*(nptr + i) == '.')
			break;
	}
	return num;
}
int checkIfNumber(char* arr)
{
	int i = 0;
	int count = 0, flag = 0;
	while (*(arr + i) != 0)
	{
		if (*(arr + i) < '0' || *(arr + i) > '9')
		{
			flag = 1;
			if (*(arr + i) == '.')
			{
				flag = 0;
				count++;
			}
		}
		i++;
	}
	if (flag == 1 || count > 1)
		return 1;
	else
		return 0;
}
long arrtolong(const char* nptr)
{
	int i = 0;
	long int num = 0;
	while (*(nptr + i) != 0)
	{
		num = num * 10 + (*(nptr + i) - '0');
		i++;
		if (*(nptr + i) == '.')
			break;
	}
	return num;
}
int arrtoint(const char* nptr)
{
	int i = 0, num = 0;
	while (*(nptr + i) != 0)
	{
		num = num * 10 + (*(nptr + i) - '0');
		i++;
		if (*(nptr + i) == '.')
			break;
	}
	return num;
}
double strtodouble(const char* str)
{
	int count = 0;

	for (int i = 0; i < 50; i++)
	{
		if (str[i] == '.')  //checking if point . is present or not
			count++;
	}
	if (count > 0)//if  present
	{

		/*devide string into two parts whole number and decimal part
		   then convert each part to number and then add up*/
		char* p = strtok(str, ".");
		double sum = strtola(p);//calling user build infunction
		char* p1 = strtok(NULL, "\0");
		double sum1 = strtola(p1);//sum after decimal point
		int l = strlen(p1);
		int multiple = 1;
		for (int i = 1; i <= l; i++)
		{
			multiple = multiple * 10;//convert sum to deviding by 10s
		}
		sum1 = sum1 / multiple;//original value after decimal point
		sum = sum + sum1;//total value after decimal point 
		return sum;
	}
	else
	{

		double sum = strtola(str);//if decimal not present converst string double
		return sum;
	}
}
int main()
{

	return 0;
}
