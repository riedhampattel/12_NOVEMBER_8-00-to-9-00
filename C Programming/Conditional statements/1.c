#include<stdio.h>
int main()
{
	int num1,num2;
	char choice,temp='%';
	
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	
	printf("\n'+'---> Addition");
	printf("\n'-'---> Subtraction");
	printf("\n'*'---> Multiplication");
	printf("\n'/'---> Division");
	printf("\n'%c'---> Remainder",temp);
	printf("\nEnter your choice = ");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '+':
			printf("\nThe addition of %d and %d is %d",num1,num2,num1+num2);
		break;
		case '-':
			printf("\nThe subtraction of %d and %d is %d",num1,num2,num1-num2);
		break;
		case '*':
			printf("\nThe multiplication of %d and %d is %d",num1,num2,num1*num2);
		break;
		case '/':
			printf("\nThe division of %d and %d is %d",num1,num2,num1/num2);
		break;
		case '%':
			printf("\nThe remainder of %d and %d is %d",num1,num2,num1%num2);
		break;
		default : printf("\nInvalid input!");
	}
	
	return 0;
}
