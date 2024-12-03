#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter any alphabet = ");
	scanf(" %c",&ch);
	
	if(ch>=65 && ch<=90)
	{
		printf("\n%c is in a upper case",ch);
	}
	else
	{
		printf("\n%c is in a lower case",ch);
	}
	return 0;
}
