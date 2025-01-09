#include<iostream>
using namespace std;
int main()
{
	int ang1,ang2,ang3;
	cout<<"Enter the value of ang1 = ";
	cin>>ang1;
	cout<<"Enter the value of ang2 = ";
	cin>>ang2;
	cout<<"Enter the value of ang3 = ";
	cin>>ang3;
	
	if(ang1+ang2+ang3==180)
	{
		cout<<"\nTriangle is possible";
	}
	else
	{
		cout<<"\nTriangle is not possible";
	}
	return 0;
}
