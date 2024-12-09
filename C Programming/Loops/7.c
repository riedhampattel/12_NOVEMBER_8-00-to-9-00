//Write a c program to take one input from the user and check whether the number is Armstrong or not?
#include<stdio.h>
#include<math.h>
int main()
{
	int num,i,power,sum=0,count=0,rem;
	printf("\nEnter the number = ");
	scanf("%d",&num);//153
	int temp = num;
	int copy = num;
	
	while(num!=0)
	{
		count++;//3
		num = num/10;
	}
	for(i=1;i<=count;i++)
	{
		rem = temp%10;
		power = pow(rem,count);
		sum = sum + power;
		temp = temp/10;
	}
	if(sum==copy)
	{
		printf("\n%d is an armstrong number",copy);
	}
	else
	{
		printf("\n%d is not an armstrong number",copy);
	}
	return 0;
}
