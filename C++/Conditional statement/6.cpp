#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter the value of ch = ";
	cin>>ch;
	if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
	{
		cout<<"This is an alphabet";
	}
	else if(ch>='0' && ch<='9')
	{
		cout<<"This is a number";
	}
	else
	{
		cout<<"This is a special character";
	}
	return 0;
}
