//without return type without argument
#include<stdio.h>
void sub();//declaration
int main()
{
	sub();
	return 0;
}
void sub()
{
	int n1,n2,ans;
	printf("\nEnter the value of n1 = ");
	scanf("%d",&n1);
	printf("\nEnter the value of n2 = ");
	scanf("%d",&n2);
	ans = n1-n2;
	printf("\nSubtraction is = %d",ans);
}
