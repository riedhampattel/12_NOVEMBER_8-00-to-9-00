#include<stdio.h>
struct Demo
{
	int num1,num2;
	char ch;
};
int main()
{
	struct Demo d1;
	d1.num1=70;
	printf("\nValue of num1 = %d",d1.num1);
	printf("\nValue of num2 = %d",d1.num2);
	printf("\nValue of ch = %c",d1.ch);
	return 0;
}