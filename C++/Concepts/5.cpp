#include<iostream>
using namespace std;
class GrandParent
{
	public :
		GrandParent()
		{
			cout<<"\nHello from GrandParent class";
		}
		void display1()
		{
			cout<<"\nHello from Grand Parent";
		}
};
class Parent1 : virtual public GrandParent
{
	public :
		void display2()
		{
			cout<<"\nHello from Parent1";
		}
};
class Parent2 : virtual public GrandParent
{
	public :
		void display3()
		{
			cout<<"\nHello from Parent2";
		}
};
class Child1 : virtual public Parent1
{
	public :
		void display4()
		{
			cout<<"\nHello from Child1";
		}
};
class Child2 : virtual public Parent2
{
	public :
		void display5()
		{
			cout<<"\nHello from Child2";
		}
};
class GreatGrandChild : public Child1,public Child2
{
	public :
		void display6()
		{
			cout<<"\nHello from Great Grand Child";
		}
};
int main()
{
	GreatGrandChild g;
	g.display1();
	return 0;
}
