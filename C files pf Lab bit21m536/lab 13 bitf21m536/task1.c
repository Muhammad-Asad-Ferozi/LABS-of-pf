#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct Num
{
	int real;
	int imag;
};
void getData(struct Num* s)
{
	printf("Ente the real part");
	scanf("%d", &s->real);
	printf("Ente the imaginary part");
	scanf("%d", &s->imag);
}
int main()
{
	struct Num C1, C2;
	getData(&C1);
	printf("The C1 is :  %d+%di\n", C1.real, C1.imag);
	getData(&C2);
	printf("The C2 is :  %d+%di\n", C2.real, C2.imag);
	if (C1.real > C2.real)
	{
		printf("C1 is gearter");
	}
	else if (C1.real < C2.real)
	{
		printf("C2 is gearter");
	}
	else if (C1.real == C2.real)
	{
		printf("Both are equal");
	}


}