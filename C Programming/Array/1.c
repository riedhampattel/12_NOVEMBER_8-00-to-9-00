#include<stdio.h>
int main()
{
	int a[5] = {1,2,3,4,5};
	//index no.=0 1 2 3 4
	char ch[5]={'a','b','c','d','e'};
	//index no.= 0   1   2   3   4
	printf("\nInt array = %d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
	printf("\n4th Element of an array = %d",a[3]);
	
	printf("\n\nChar array = %c %c %c %c %c",ch[0],ch[1],ch[2],ch[3],ch[4]);
	printf("\n2nd Element of an array = %c",ch[1]);
	return 0;
}
