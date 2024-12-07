//Write a c program to take a number from the user and display it's factorial.
#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("\nEnter the number = ");
	scanf("%d",&num);//4
	for(i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	printf("\nFactorial of %d is %d",num,fact);
	return 0;
}
