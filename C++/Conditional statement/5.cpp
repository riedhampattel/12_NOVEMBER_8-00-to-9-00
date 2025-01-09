#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter the value of ch = ";
	cin>>ch;
	if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
	{
		cout<<"This is an alphabet";
	}
	else if(ch>=48 && ch<=57)
	{
		cout<<"This is a number";
	}
	else
	{
		cout<<"This is a special character";
	}
	return 0;
}
