//Write a c program to take one input from the user and check whether the number is strong or not?
#include<stdio.h>
int main()
{
	int num,rem,i,fact,sum=0;
	printf("\nEnter the value of num = ");
	scanf("%d",&num);//145
	int temp = num;
	while(num!=0)
	{
		rem = num % 10;
		fact = 1;
		for(i=1;i<=rem;i++)
		{
			fact = fact*i;
		}
		sum = sum + fact;
		num = num/10;
	}
	if(sum==temp)
	{
		printf("\n%d is a strong number",temp);
	}
	else
	{
		printf("\n%d is not a strong number",temp);
	}
	return 0;
}