//with return type and with argument
#include<stdio.h>
int add(int num1,int num2);//function declaration
int main()
{
	int num1,num2;
	printf("\nEnter the value of num1 = ");
	scanf("%d",&num1);
	printf("\nEnter the value of num2 = ");
	scanf("%d",&num2);
	int ans = add(num1,num2);//calling of the function
	printf("\nThe addition is = %d",ans);
	return 0;
}
int add(int num1,int num2)
{
	int ans;
	ans = num1+num2;
	return ans;
}
