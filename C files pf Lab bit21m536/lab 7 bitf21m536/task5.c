#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int findlowert(int juge1, int juge2, int juge3, int juge4, int juge5)
{
	if (juge1 < juge2 && juge1 < juge3 && juge1 < juge4 && juge1 < juge5)
		return juge1;
	if (juge2 < juge1 && juge2 < juge3 && juge2 < juge4 && juge2 < juge5)
		return juge2;
	if (juge3 < juge2 && juge3 < juge1 && juge3 < juge4 && juge3 < juge5)
		return juge3;
	if (juge4 < juge2 && juge4 < juge3 && juge4 < juge1 && juge4 < juge5)
		return juge4;
	if (juge5 < juge2 && juge5 < juge3 && juge5 < juge4 && juge5 < juge1)
		return juge5;
}
int findHighest(int juge1, int juge2, int juge3, int juge4, int juge5)
{
	if (juge1 > juge2 && juge1 > juge3 && juge1 > juge4 && juge1 > juge5)
		return juge1;
	if (juge2 > juge1 && juge2 > juge3 && juge2 > juge4 && juge2 > juge5)
		return juge2;
	if (juge3 > juge2 && juge3 > juge1 && juge3 > juge4 && juge3 > juge5)
		return juge3;
	if (juge4 > juge2 && juge4 > juge3 && juge4 > juge1 && juge4 > juge5)
		return juge4;
	if (juge5 > juge2 && juge5 > juge3 && juge5 > juge4 && juge5 > juge1)
		return juge5;
}
void getJudgeData(int *juge, int i)
{
	do
	{
		printf("Enter the secure of juge %d: ", i);
		scanf("%d", &(*juge));
	} while (*juge < 0 || *juge>10);
}


void calcScoure(int juge1, int juge2, int juge3, int juge4, int juge5,float *average)
{
	float sum = juge1 + juge2 + juge3 + juge4 + juge5;
	sum = sum - (findHighest(juge1, juge2, juge3, juge4, juge5) + findlowert(juge1, juge2, juge3, juge4, juge5));
	*average = sum / 3.0;
}
int main()
{
	int juge1, juge2, juge3, juge4, juge5;
	for (int i = 1; i <= 5; i++)
	{
		if (i == 1)
		{
			getJudgeData(&juge1, i);
		}
			
		if (i == 2)
			getJudgeData(&juge2, i);
		if (i == 3)
			getJudgeData(&juge3, i);
		if (i == 4)
			getJudgeData(&juge4, i);
		if (i == 5)
			getJudgeData(&juge5, i);
	}
	float average = 0;
	calcScoure(juge1, juge2, juge3, juge4, juge5, &average);

	printf("the average secure is %.1f", average);
}