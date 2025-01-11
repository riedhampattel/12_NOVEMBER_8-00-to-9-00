#include<iostream>
using namespace std;
int main()
{
	double term,sum=0,num=1,i;
	cout<<"Enter the term = ";
	cin>>term;//3
	for(i=1;i<=term;i++)
	{
		sum = sum + num;
		num = (num*10) + 1;
	}
	cout<<"\nThe addition is = "<<sum;
	return 0;
}
