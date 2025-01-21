#include<iostream>
using namespace std;
int fibonnaci(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return fibonnaci(n-1) + fibonnaci(n-2);
	}
}
int main()
{
	int term;
	cout<<"Enter the term = ";
	cin>>term;//5
	int result = fibonnaci(term);
	cout<<"\nResult = "<<result;
	return 0;
}
