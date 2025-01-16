#include<iostream>
using namespace std;
int main()
{
	int a[100],size,i,index;
	cout<<"Enter the size of an array = ";
	cin>>size;//5
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in a["<<i<<"] = ";
		cin>>a[i];	
	}
	cout<<"\nEnter the index number = ";
	cin>>index;//2
	if(index<size)
	{
		cout<<a[index]<<" presents on index number "<<index;
	}
	else
	{
		cout<<"\nInvalid index number";
	}
	return 0;
}
