#include<stdio.h>
//& ---> address of
//* ---> value at
int main()
{
	int a=10;
	int b=20;
	int *ptr=&a;
	
	printf("\nValue of a = %d",a);
	printf("\nValue of a = %d",*ptr);
	printf("\nAddress of a = %p",ptr);
	printf("\nAddress of a = %p",&a);
	
	printf("\nValue of b = %d",b);
	printf("\nAddress of b = %p",&b);
	return 0;
}
