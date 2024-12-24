#include<stdio.h>
void copy(char s1[])
{
	char str[100];
	int i;
	for(i=0;s1[i]!='\0';i++)
	{
		str[i] = s1[i];
	}
	printf("\nValue of s1 = %s",s1);
	printf("\nValue of str = ");
	for(i=0;s1[i]!='\0';i++)
	{
		printf("%c",str[i]);
	}
}
int main()
{
	char str1[100];
	printf("\nEnter the string = ");
	gets(str1);
	printf("\nOriginal value of str1 = %s",str1);
	copy(str1);
	return 0;
}
