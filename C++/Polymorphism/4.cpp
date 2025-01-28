#include<iostream>
using namespace std;
//function overriding
class Parent
{
	public :
		void display()
		{
			cout<<"\nHello from Parent class";
		}
};
class Child : public Parent
{
	public :
		void display()
		{
			cout<<"\nHello from Child class";
		}
};
class GrandChild : public Child
{
	public :
		void display()
		{
			cout<<"\nHello from GrandChild class";
		}
};
int main()
{
	Parent p;
	p.display();	
	
	Child c;
	c.display();
	
	GrandChild gc;
	gc.display();
	return 0;
}
