#include<stdio.h>
int main()
{
	int num1,num2,ans;
	printf("Enter any value in num1 = ");
	scanf("%d",&num1);//5
	printf("Enter any value in num2 = ");
	scanf("%d",&num2);//4
	ans = num1+num2;
	printf("\nThe addition of %d and %d is %d",num1,num2,ans);
	
	printf("\nEnter any value in num1 = ");
	scanf("%d",&num1);//8
	printf("Enter any value in num2 = ");
	scanf("%d",&num2);//10
	printf("\nThe subtraction of %d and %d is %d",num1,num2,num1-num2);
	
	printf("\nEnter any value in num1 = ");
	scanf("%d",&num1);//8
	printf("Enter any value in num2 = ");
	scanf("%d",&num2);//10
	printf("\nThe multiplication of %d and %d is %d",num1,num2,num1*num2);
	
	printf("\nEnter any value in num1 = ");
	scanf("%d",&num1);//8
	printf("Enter any value in num2 = ");
	scanf("%d",&num2);//10
	printf("\nThe division of %d and %d is %d",num1,num2,num1/num2);
	
	printf("\nEnter any value in num1 = ");
	scanf("%d",&num1);//8
	printf("Enter any value in num2 = ");
	scanf("%d",&num2);//10
	printf("\nThe remainder of %d and %d is %d",num1,num2,num1%num2);
	return 0;
}
