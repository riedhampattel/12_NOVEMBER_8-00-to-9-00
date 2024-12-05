#include<stdio.h>
int main()
{
	int start,end,i;
	printf("\nEnter the starting number = ");
	scanf("%d",&start);
	printf("\nEnter the ending number = ");
	scanf("%d",&end);
	for(i=start;i<=end;i++)
	{
		printf("\n%d",i);	
	}
	return 0;
}
