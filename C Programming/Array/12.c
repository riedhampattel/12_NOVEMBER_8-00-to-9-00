//Write a c program to take row and column numbers of 2D array and elements from the user and make one calculator with addition, subtraction and multiplication facilities using control statement.
#include<stdio.h>
int main()
{
	int row,col,a[100][100],b[100][100],ans[100][100];
	int i,j,choice;
	
	printf("\nEnter the row number = ");
	scanf("%d",&row);
	printf("\nEnter the col number = ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the element in b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nArray a :=\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nArray b :=\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	printf("\n\nPress '+' for Addition");
	printf("\nPress '-' for Subtraction");
	printf("\nEnter your choice = ");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case '+':
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					ans[i][j] = a[i][j] + b[i][j];
				}
			}
			printf("\nThe addition is := \n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
		break;
		case '-':
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					ans[i][j] = a[i][j] - b[i][j];
				}
			}
			printf("\nThe addition is := \n");
			for(i=0;i<row;i++)
			{
				for(j=0;j<col;j++)
				{
					printf("%d ",ans[i][j]);
				}
				printf("\n");
			}
		break;
		default : printf("\nInvalid input!");
	}
	return 0;
}
