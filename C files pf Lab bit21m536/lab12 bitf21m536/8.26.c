#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isDigit(char c);		
int isAlphabet(char c);		
int isLowerAlphabet(char c);	
int isCapitalAlphabet(char c);	
int isAlphabetNumeric(char c);	
int isHexaDigit(char c);	
int isSpace(char c);		
int isPunctuation(char c);	
int isBlank(char c);		
int isPrint(char c);		
int isCntrl(char c);		
int toLower(char c);		
int isGraph(char c);		
int toUpper(char c);		
int main()
{

	return 0;

}
int isDigit(char c)
{
	if (c >= '0' && c <= '9')
		return 1;
	else
		return 0;
}
int isAlphabet(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	else
		return 0;
}
int isLowerAlphabet(char c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else
		return 0;
}
int isCapitalAlphabet(char c)
{
	if (c >= 'A' && c <= 'Z')
		return 1;
	else
		return 0;
}
int isAlphabetNumeric(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	else
		return 0;
}
int isHexaDigit(char c)
{
	if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') || (c >= 'a' && c <= 'z'))
		return 1;
	else
		return 0;
}
int isSpace(char c)
{
	if (c == 32)
		return 1;
	else
		return 0;
}
int isPunctuation(char c)
{
	if (c > 32)
	{
		if (!((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')))
			return 1;
		else
			return 0;
	}
	else
		return 0;
}
int isBlank(char c)
{
	if (c == '\0')
		return 1;
	else
		return 0;
}
int isPrint(char c)
{
	if (c >= 32)
		return 1;
	else
		return 0;
}
int isGraph(char c)
{
	if (c <= 32)
		return 0;
	else
		return 1;
}
int isCntrl(char c)
{
	if (c == '\t' || c == '\v' || c == '\f' || c == '\a' || c == '\b' || c == '\r' || c == '\n')
		return 1;
	else
		return 0;
}
int toLower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return c + 32;
	else
		return c;
}
int toUpper(char c)
{
	if (c >= 'a' && c <= 'z')
		return c - 32;
	else
		return c;
}