/*
Write a c program to take row and column number from the user and print the following pattern.

* * * * 
* * * *
* * * *
* * * *
*/
#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	printf("\nEnter the col number = ");
	scanf("%d",&col);
	
	for(i=1;i(3)<=row(2);i++)
	{
		for(j=1;j(4)<=col(3);j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
