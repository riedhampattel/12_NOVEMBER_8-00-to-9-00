#include<iostream>
using namespace std;
int power(int base,int exp)
{
	if(exp!=0)
	{
		return base * power(base,exp-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int b,e;
	cout<<"Enter the value of base = ";
	cin>>b;//2
	cout<<"Enter the value of exponent = ";
	cin>>e;//3
	int result = power(b,e);
	cout<<"\nPower is = "<<result;
	return 0;
}
