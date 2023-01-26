#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a =0, b=0, c=0, d=0, f=0;
	char grade;
	printf("enter 'X' for the termination of loop:\n");
	do {
		printf("enter the grade of studest:");
		
		scanf("%c", &grade);
		getchar();
		switch (grade)
		{
		case 'A':
		case 'a': {
			a++;
			break;
		}
		case 'B':
		case 'b': {
			b++;
			break;
		}
		case 'C':
		case 'c': {
			c++;
			break;
		}
		case 'D':
		case 'd': {
			d++;
			break;
		}
		case 'F':
		case 'f': {
			f++;
			break;
		}
		default: {
			printf("invalid number\n");
			break;
		}
		}
	} while (grade != 'x' && 'X');
	printf("\ngrade of A studests are: %d", a);
	printf("\ngrade of B studests are: %d", b);
	printf("\ngrade of C studests are: %d", c);
	printf("\ngrade of D studests are: %d", d);
	printf("\ngrade of F studests are: %d", f);

}