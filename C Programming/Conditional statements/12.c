#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the character value = ");
	scanf(" %c",&ch);//A
	
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	{
		printf("\n%c is an alphabet",ch);
	}
	else if(ch>=48 && ch<=57)
	{
		printf("\n%c is a number",ch);
	}
	else
	{
		printf("\n%c is a special character",ch);
	}
	return 0;
}
