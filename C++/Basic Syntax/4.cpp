#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter the value of num1 = ";
	cin>>num1;
	cout<<"Enter the value of num2 = ";
	cin>>num2;
	
	if(num1>num2)
	{
		cout<<num1<<" is the biggest number";
	}
	else if(num2>num1)
	{
		cout<<num2<<" is the biggest number";
	}
	else
	{
		cout<<"\nBoth numbers are equal";
	}
	return 0;
}
