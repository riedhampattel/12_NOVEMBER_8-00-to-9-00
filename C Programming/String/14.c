#include<stdio.h>
int length(char c[])
{
	int i,count=0;
	for(i=0;c[i]!='\0';i++)
	{
		count++;//3
	}
	return count;
}
int main()
{
	char str[100];
	printf("\nEnter the string = ");
	gets(str);//Bye
	printf("\nOriginal value = %s",str);
	int ans=length(str);
	printf("\nLength of the string = %d",ans);
	return 0;
}
