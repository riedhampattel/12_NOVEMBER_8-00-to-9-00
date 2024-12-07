#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\nEnter the value of starting = ");
	scanf("%d",&start);//10
	printf("\nEnter the value of ending = ");
	scanf("%d",&end);//5
	
	if(start<end)
	{
		for(i=start;i<=end;i++)
		{
			printf("\n%d",i);
		}
	}
	else
	{
		for(i=start;i>=end;i--)
		{
			printf("\n%d",i);
		}
	}
	return 0;
}
