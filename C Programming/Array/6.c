//Write a c program to take size of an array and elements from the user and print the sum and average of all the elements
#include<stdio.h>
int main()
{
	int size,a[100],i,sum=0;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
		sum = sum + a[i];
	}
	printf("\nAddition = %d",sum);
	printf("\nAverage = %.2f",(float)sum/(float)size);
	return 0;
}
