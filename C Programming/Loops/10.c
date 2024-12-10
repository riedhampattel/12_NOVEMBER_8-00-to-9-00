//Write a c program to take 2 numbers from the user and print all the prime numbers and not prime numbers between them.(Use switch case)
#include<stdio.h>
int main()
{
	int start,end,i,j,count;
	char choice,ch;
	printf("\nEnter the starting number = ");
	scanf("%d",&start);//1
	printf("\nEnter the ending number = ");
	scanf("%d",&end);//5
	
	label1:
	printf("\n\nPress 'Y' for prime numbers");
	printf("\n\nPress 'N' for non prime numbers");
	printf("\nEnter your choice = ");
	scanf(" %c",&choice);
	
	switch(choice)
	{
		case 'Y':
			for(i=start;i<=end;i++)
			{
				int num = i;
				count = 0;
				for(j=2;j<=num/2;j++)
				{
					if(num%j==0)
					{
						count++;
					}
				}
				if(count==0)
				{
					printf("%d ",i);
				}
			}
		break;
		case 'N':
			for(i=start;i<=end;i++)
			{
				int num = i;
				count = 0;
				for(j=2;j<=num/2;j++)
				{
					if(num%j==0)
					{
						count++;
					}
				}
				if(count!=0)
				{
					printf("%d ",i);
				}
			}
		break;
		default : printf("\nInvalid choice");
	}
	
	label2:
	printf("\n\nPress 'C' for continue");
	printf("\n\nPress 'X' for exit");
	printf("\nEnter your choice = ");
	scanf(" %c",&ch);
	if(ch=='C')
	{
		goto label1;
	}
	else if(ch=='X')
	{
		goto label3;
	}
	else
	{	
		printf("\nInvalid choice");
		goto label2;
	}
	label3:
	return 0;
}
