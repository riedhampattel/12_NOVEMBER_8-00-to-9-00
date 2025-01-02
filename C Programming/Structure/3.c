#include<stdio.h>
struct Car
{
	int mnum;
	char name[100];
	double price;
};
int main()
{
	struct Car c[100];
	int size,i;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the model number = ");
		scanf("%d",&c[i].mnum);
		printf("\nEnter the company = ");
		scanf("%s",&c[i].name);
		printf("\nEnter the price = ");
		scanf("%lf",&c[i].price);
	}
	for(i=0;i<size;i++)
	{
		printf("\nDetails of car %d : ",i+1);
		printf("\nModel no = %d",c[i].mnum);
		printf("\nCompany name = %s",c[i].name);
		printf("\nPrice = %.2lf",c[i].price);
		printf("\n");
	}
	return 0;
}
