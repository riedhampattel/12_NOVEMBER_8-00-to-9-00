#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter the value of num = ");
	scanf("%d",&num);//-5
	
	if(num>0)
	{
		printf("\n%d is the positive number",num);
	}
	else
	{
		printf("\n%d is the negative number",num);
	}
	return 0;
}
