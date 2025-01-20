#include<iostream>
using namespace std;
void display(int num)
{
	if(num!=0)
	{
		cout<<"\nHello World!";//3
		display(num-1);
	}
}
int main()
{
	int num;
	cout<<"Enter the count = ";
	cin>>num;//3
	display(num);
	return 0;
}
