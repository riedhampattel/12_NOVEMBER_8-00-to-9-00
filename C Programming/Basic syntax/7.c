#include<stdio.h>
int main()
{
	int num1,num2;
	float ans;
	printf("\nEnter any value in num1 = ");
	scanf("%d",&num1);//8
	printf("Enter any value in num2 = ");
	scanf("%d",&num2);//10
	ans = (float)num1/(float)num2;
	printf("\nThe division of %d and %d is %.3f",num1,num2,ans);
	return 0;
}
