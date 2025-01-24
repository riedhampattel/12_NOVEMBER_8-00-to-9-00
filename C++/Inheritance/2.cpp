#include<iostream>
using namespace std;
class Parent
{
	public :
		void display1()
		{
			cout<<"\nHello from Parent class";
		}
};
class Child : public Parent
{
	public :
		void display2()
		{
			cout<<"\nHello from Child class";
		}
};
class GrandChild : public Child
{
	public :
		void display3()
		{
			cout<<"\nHello from GrandChild class";
		}
};
class GreatGrandChild : public GrandChild
{
	
};
int main()
{
	Child c;
	GrandChild gc;
	GreatGrandChild ggc;
	
	c.display1();
	gc.display1();
	gc.display2();
	ggc.display1();
	ggc.display2();
	ggc.display3();
	return 0;
}
