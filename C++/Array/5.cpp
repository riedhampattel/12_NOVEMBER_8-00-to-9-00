#include<iostream>
using namespace std;
int main()
{
	int a[100],size,i,element,index;
	cout<<"Enter the size of an array = ";
	cin>>size;//5
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];	
	}
	cout<<"\nEnter the element = ";
	cin>>element;
	cout<<"\nEnter the index number = ";
	cin>>index;
	if(index<=size)
	{
		for(i=size-1;i>=index;i--)
		{
			a[i+1] = a[i];
		}
		a[index] = element;
		cout<<"\nArray after insertion = ";
		for(i=0;i<=size;i++)
		{
			cout<<a[i]<<" ";
		}
	}
	else
	{
		cout<<"Invalid index number";
	}
	return 0;
}
