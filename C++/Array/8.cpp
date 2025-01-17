#include<iostream>
using namespace std;
int main()
{
	int size,a[100],i,element,index=-1;
	cout<<"Enter the size of an array = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];
	}
	cout<<"Enter the element = ";
	cin>>element;
	
	for(i=0;i<size;i++)
	{
		if(element==a[i])
		{
			index = i;
		}
	}
	if(index!=-1)
	{
		for(i=index;i<size;i++)
		{
			a[i] = a[i+1];
		}
		cout<<"\nArray after deletion = ";
		for(i=0;i<size-1;i++)
		{
			cout<<a[i]<<" ";
		}
	}
	else
	{
		cout<<"\nelement is not present in an array";
	}
	return 0;
}
