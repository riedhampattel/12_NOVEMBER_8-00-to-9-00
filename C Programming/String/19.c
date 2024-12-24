#include<stdio.h>
void lower(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i] = str[i]+32;
		}
	}
	printf("\nString in lower case = %s",str);
}
int main()
{
	char str[100];
	printf("\nEnter the value of str = ");
	gets(str);
	printf("\nOriginal value of str = %s",str);
	lower(str);
	return 0;
}
