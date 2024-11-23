#include<stdio.h>
int main()
{
	int a=10;
	printf("\nValue of a before pre increment = %d",a);
	printf("\nValue of a while doing increment = %d",++a);
	printf("\nValue of a after pre increment = %d",a);
	
	int b = 10;
	printf("\nValue of b before post increment = %d",b);
	printf("\nValue of b while doing increment = %d",b++);
	printf("\nValue of b after post increment = %d",b);
	return 0;
}
