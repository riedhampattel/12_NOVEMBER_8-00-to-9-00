#include<iostream>
using namespace std;
int main()
{	
	int size1,size2,a[100],b[100],c[200],i;
	cout<<"Enter the size of an array = ";
	cin>>size1;
	for(i=0;i<size1;i++)
	{
		cout<<"\nEnter the elements in a["<<i<<"] = ";
		cin>>a[i];
	}
	cout<<"Enter the size of an array = ";
	cin>>size2;
	for(i=0;i<size2;i++)
	{
		cout<<"\nEnter the elements in b["<<i<<"] = ";
		cin>>b[i];
	}
	
	cout<<"\nArray a = ";
	for(i=0;i<size1;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nArray b = ";
	for(i=0;i<size2;i++)
	{
		cout<<b[i]<<" ";
	}
	
	for(i=0;i<size1;i++)
	{
		c[i] = a[i];
	}
	for(i=0;i<size2;i++)
	{
		c[size1] = b[i];
		size1++;
	}
	cout<<"\nMerged array = ";
	for(i=0;i<size1;i++)
	{
		cout<<c[i]<<" ";
	}
	return 0;
}
