#include<iostream>
using namespace std;
int main()
{
	int height;
	cout<<"Enter the height = ";
	cin>>height;
	
	if(height<150)
	{
		cout<<"\ndwarf";
	}
	else if(height>=150 && height<=200)
	{
		cout<<"\nAverage heighted";
	}
	else
	{
		cout<<"\nTaller";
	}
	return 0;
}
