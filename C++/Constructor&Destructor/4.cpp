#include<iostream>
using namespace std;
class Parent
{
	public :
		Parent()
		{
			cout<<"\nParent class";
		}
};
class Child : public Parent
{
	public :
		Child()
		{
			cout<<"\nChild class";
		}
};
class GrandChild : public Child
{
	public :
		GrandChild()
		{
			cout<<"\nGrandChild class";
		}
};
int main()
{
	Parent p;
	GrandChild gc;
	return 0;
}
