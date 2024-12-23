#include<stdio.h>
void reverse(char c[])
{
	int i,length=0,j=0;
	char str[100];
	for(i=0;c[i]!='\0';i++)
	{
		length++;
	}
	for(i=length-1;i>=0;i--)
	{
		str[j] = c[i];
		j++;
	}
	printf("\nReversed String = ");
	for(i=0;c[i]!='\0';i++)
	{
		printf("%c",str[i]);
	}
}
int main()
{
	char str[100];
	printf("\nEnter the string = ");
	gets(str);
	printf("\nOriginal value of string = %s",str);
	reverse(str);
	return 0;
}
