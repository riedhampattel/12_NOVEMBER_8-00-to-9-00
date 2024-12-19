//wihout return type with argument
#include<stdio.h>
void multi(int n1,int n2);//declaration of the function
int main()
{
	int n1,n2;
	printf("\nEnter the value of n1 = ");
	scanf("%d",&n1);
	printf("\nEnter the value of n2 = ");
	scanf("%d",&n2);
	multi(n1,n2);
	return 0;
}
void multi(int n1,int n2)
{
	int ans;
	ans = n1*n2;
	printf("\nMultiplication = %d",ans);
}
