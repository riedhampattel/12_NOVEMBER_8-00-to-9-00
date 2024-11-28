#include<stdio.h>
int main()
{
	int num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	
	switch(num1>num2)
	{
		case 1:
			printf("\n%d is the biggest number",num1);
		break;
		case 0:
			printf("\n%d is the biggest number",num2);
	}
	return 0;
}
