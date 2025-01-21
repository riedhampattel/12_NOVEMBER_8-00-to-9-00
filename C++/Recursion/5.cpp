#include<iostream>
using namespace std;
int sumarr(int arr[],int s)
{
	if(s!=0)
	{
		return arr[s-1] + sumarr(arr,s-1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int size,a[100],i;
	cout<<"Enter the size of an array = ";
	cin>>size;//5
	for(i=0;i<size;i++)
	{
		cout<<"Enter the element in a["<<i<<"] = ";
		cin>>a[i];
	}
	int result = sumarr(a,size);
	cout<<"\nThe result is = "<<result;
	return 0;
}
