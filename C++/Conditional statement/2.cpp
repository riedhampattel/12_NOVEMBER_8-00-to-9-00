#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter the value of x coordinate = ";
	cin>>x;
	cout<<"Enter the value of y coordinate = ";
	cin>>y;
	if(x>0 && y>0)
	{
		cout<<"The coordinate point ("<<x<<","<<y<<") lies in the First quadrant.";
	}
	else if(x<0 && y>0)
	{
		cout<<"The coordinate point ("<<x<<","<<y<<") lies in the Second quadrant.";
	}
	else if(x<0 && y<0)
	{
		cout<<"The coordinate point ("<<x<<","<<y<<") lies in the Third quadrant.";
	}
	else if(x>0 && y<0)
	{
		cout<<"The coordinate point ("<<x<<","<<y<<") lies in the Fourth quadrant.";
	}
	else
	{
		cout<<"The coordinate point ("<<x<<","<<y<<") lies on the origin point";
	}
	return 0;
}
