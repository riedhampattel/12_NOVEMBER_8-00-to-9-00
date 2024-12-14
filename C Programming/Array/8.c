//Write a c program to take size of an array and elements from the user and sort in ascending and descending order
#include<stdio.h>
int main()
{
	int size,a[100],i,j,temp,choice;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in an a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\n\n1.Ascending order");
	printf("\n2.descending order");
	printf("\nEnter your choice = ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			for(i=0;i<size;i++)
			{
				for(j=i+1;j<size;j++)
				{
					if(a[i]>a[j])
					{
						temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
				}
			}
			printf("\nAscending ordered array = ");
			for(i=0;i<size;i++)
			{
				printf("%d ",a[i]);
			}
		break;
		case 2:
			for(i=0;i<size;i++)
			{
				for(j=i+1;j<size;j++)
				{
					if(a[i]<a[j])
					{
						temp = a[i];
						a[i] = a[j];
						a[j] = temp;
					}
				}
			}
			printf("\nDescending ordered array = ");
			for(i=0;i<size;i++)
			{
				printf("%d ",a[i]);
			}
		break;
		default : printf("\nInvalid input!");
	}
	return 0;
}
