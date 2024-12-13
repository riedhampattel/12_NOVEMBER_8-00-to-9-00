#include<stdio.h>
int main()
{
	int i;
	int a[5] = {1,2,3,4,5};
	//index no.=0 1 2 3 4
	char ch[5]={'a','b','c','d','e'};
	//index no.= 0   1   2   3   4
	printf("\nArray a = ");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nArray ch = ");
	for(i=0;i<5;i++)
	{
		printf("%c ",ch[i]);
	}
	return 0;
}
