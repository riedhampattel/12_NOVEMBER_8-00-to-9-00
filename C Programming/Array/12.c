//Write a c program to take row and column numbers of 2D array and elements from the user and perform the multiplication
#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],ans[100][100];
	int size,i,j,k;
	
	printf("\nEnter the ize of an array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the element in a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("\nEnter the element in b[%d][%d] = ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nArray a :=\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nArray b :=\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
            ans[i][j] = 0;
            for(k=0;k<size;k++)
            {
                ans[i][j] = ans[i][j] + (a[i][k]*b[k][j]);
            }
		}
	}
    printf("\nArray ans :=\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d ",ans[i][j]);
		}
		printf("\n");
	}
	return 0;
}