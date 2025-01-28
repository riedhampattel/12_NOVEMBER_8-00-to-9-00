#include<iostream>
using namespace std;
class Demo
{
	private :
		int x=10;
		string s1="Private";
	protected :
		int y=20;
		string s2="Protected";
	public :
		int z=30;
		string s3="Public";
};
class Derive : public Demo
{
	public :
		void display()
		{
			cout<<"\nValue of y = "<<y;
			cout<<"\nValue of s2 = "<<s2;
		}
};
int main()
{
	Demo d;
	Derive dr;
	
//	private ---> within the class
//	cout<<"\nValue of x = "<<d.x;
//	cout<<"\nValue of s1 = "<<d.s1;

//	procted ---> within the class and in derived class
//	cout<<"\nValue of y = "<<d.y;
//	cout<<"\nValue of s2 = "<<d.s2;

//	procted ---> within the class and in derived class
//	cout<<"\nValue of y = "<<dr.y;
//	cout<<"\nValue of s2 = "<<dr.s2;

	dr.display();
	
	cout<<"\nValue of z = "<<d.z;
	cout<<"\nValue of s3 = "<<d.s3;
	return 0;
}
