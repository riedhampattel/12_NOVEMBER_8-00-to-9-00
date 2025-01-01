#include<stdio.h>
int main()
{
	int a=10;
	int* ptr=&a;
	int *q=ptr;
	int *s=q;
	
	a=20;
	*s=30;
	
	printf("\nValue of a = %d",a);
	printf("\nAddress of a = %p",&a);
	printf("\nValue of ptr = %d",*ptr);
	printf("\nAddress of ptr = %p",ptr);
	printf("\nValue of q = %d",*q);
	printf("\nAddress of q = %p",q);
	printf("\nValue of s = %d",*s);
	printf("\nAddress of s = %p",s);
	return 0;
}
