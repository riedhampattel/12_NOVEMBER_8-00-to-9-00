#include<iostream>
using namespace std;
int main()
{
	int a[100],size,i,element,index=-1;
	cout<<"Enter the size of an array = ";
	cin>>size;//5
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];	
	}
	cout<<"Enter the element = ";
	cin>>element;
	for(i=0;i<size;i++)
	{
		if(a[i]==element)
		{
			index=i;
		}
	}
	if(index!=-1)
	{
		cout<<element<<" is present on index number "<<index;
	}
	else
	{
		cout<<"\nElement is not present in an array";
	}
	return 0;
}
