#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct Address
{
	char street[30];
	char city[30];
};
struct Student
{
	char name[30];
	int roll;
	struct Address;
};
void display(const struct Student* S)
{
	printf("Name : %s\nRoll Number: %d\nStreet: %s\nCity: %s", S->name, S->roll, S->street, S->city);
}
int main()
{
	struct Student S1;
	strcpy(S1.name, "asad\n");
	strcpy(S1.street, "No1\n");
	strcpy(S1.city, "burewala\n");
	S1.roll = 36;

	display(&S1);
}