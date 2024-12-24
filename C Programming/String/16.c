#include<stdio.h>
int compare(char s1[],char s2[])
{
	int i,count=0;
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]!=s2[i])
		{
			count++;
		}
	}
	return count;
}
int main()
{
	char str1[100],str2[200];
	printf("\nEnter the value of str1 = ");
	gets(str1);
	printf("\nEnter the value of str2 = ");
	gets(str2);
	printf("\nOriginal value of str1 = %s",str1);
	printf("\nOriginal value of str2 = %s",str2);
	int result = compare(str1,str2);
	if(result==0)
	{
		printf("\nBoth strings are same");
	}
	else
	{
		printf("\nBoth strings are different");
	}
	return 0;
}
