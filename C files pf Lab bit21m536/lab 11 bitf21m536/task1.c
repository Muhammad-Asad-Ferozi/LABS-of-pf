#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define S1 5
#define S2 10
int main()
{
	char a[S1][S2] = { {"BITF21M501"},{"BITF21M502"} ,{"BITF21M503"} ,{"BITF21M504"} ,{"BITF21M505"} };
	char a1[11];
	int flag=0;
	printf("ENter the roolnumber: ");
	scanf("%s", a1);
	for (int i = 0; i < S1; i++)
	{
		for (int j = 0; j < S2; j++)
		{
			if (*(a1 + j) == *(*(a + i) + j))
			{
				flag = 0;
			}
			else
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
	if (flag == 1)
	{
		printf("number is roll number is in valid");
	}
	else
	{
		printf("roll number is valid");
	}
}