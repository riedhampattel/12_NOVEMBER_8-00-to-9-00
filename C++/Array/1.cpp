#include<iostream>
using namespace std;
int main()
{
	int a[100],size,b[100],i;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the elements in a["<<i<<"]= ";
		cin>>a[i];
	}
	for(i=0;i<size;i++)
	{
		b[i] = a[i];
	}
	cout<<"\nArray a = ";
	for(i=0;i<size;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nArray b (copied array) = ";
	for(i=0;i<size;i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}
