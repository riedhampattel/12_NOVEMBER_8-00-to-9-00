//Write a c program to take one input from the user and check whether the number is prime or not?
#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("\nEnter the number = ");
	scanf("%d",&num);
	for(i=2;i<num/2;i++)
	{
		if(num%i==0)
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("\n%d is a prime number",num);
	}
	else
	{
		printf("\n%d is not a prime number",num);
	}
	return 0;
}
