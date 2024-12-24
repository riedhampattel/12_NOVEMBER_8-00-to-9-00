#include<stdio.h>
void upper(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>=97 && str[i]<=122)
		{
			str[i] = str[i]-32;
		}
	}
	printf("\nString in upper case = %s",str);
}
int main()
{
	char str[100];
	printf("\nEnter the value of str = ");
	gets(str);
	printf("\nOriginal value of str = %s",str);
	upper(str);
	return 0;
}
