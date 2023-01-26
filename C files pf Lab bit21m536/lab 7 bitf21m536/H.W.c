#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int fu(int *x)
{
	scanf("%d", x);
	return *x;
}
int main()
{
	int x = 0;
	int y = fu(&x);
	printf("%d", y);

}
