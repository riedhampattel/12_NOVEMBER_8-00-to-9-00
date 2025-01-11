#include<iostream>
using namespace std;
int main()
{
	int row=5;
	int spc=row-1,i,j,k;
	int star=row-1;
	for(i=1;i<=row;i++)
	{
		for(k=1;k<=spc;k++)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		spc--;
		cout<<"\n";
	}
	for(i=1;i<=row-1;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<" ";
		}
		for(k=1;k<=star;k++)
		{
			cout<<"* ";
		}
		star--;
		cout<<"\n";
	}
	return 0;
}
