//Write a c program to take terms from the user and print fibonaci series.
#include<stdio.h>
int main()
{
	int term,num1=0,num2=1,num3,i;
	printf("\nEnter the terms = ");
	scanf("%d",&term);//5
	printf("\nFibonaci series = %d %d ",num1,num2);
	//0 1 1 2 3 
	for(i=1;i<=term-2;i++)
	{
		num3 = num1 + num2;
		printf("%d ",num3);
		num1 = num2;
		num2 = num3;
	}
	return 0;
}
