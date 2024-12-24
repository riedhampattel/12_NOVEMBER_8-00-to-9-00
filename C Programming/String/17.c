#include<stdio.h>
void concate(char str1[],char str2[])
{
	char str3[200];
	int len=0,i;
	for(i=0;str1[i]!='\0';i++)
	{
		str3[i] = str1[i];
		len++;
	}
	for(i=0;str2[i]!='\0';i++)
	{
		str3[len] = str2[i];
		len++;
	}
	printf("\nMerged string is = ");
	for(i=0;i<len;i++)
	{
		printf("%c",str3[i]);
	}
}
int main()
{
	char str1[100],str2[100];
	printf("\nEnter the value of str1 = ");
	gets(str1);
	printf("\nEnter the value of str2 = ");
	gets(str2);
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	concate(str1,str2);
	return 0;
}
