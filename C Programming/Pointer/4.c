#include<stdio.h>
int main()
{
	int i;
	int a[5]={1,2,3,4,5};
	int *ptr=&a;
	
	printf("\nAddress of a = %p",ptr);
	
	for(i=0;i<5;i++)
	{
		printf("\nAddress of a[%d] = %p",i,&a[i]);
		printf("\nValue of a[%d] = %d",i,*(ptr+i));
	}
		
	return 0;
}
