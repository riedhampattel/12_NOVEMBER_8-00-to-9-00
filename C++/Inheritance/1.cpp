#include<iostream>
using namespace std;
//simple inheritance
class Parent//base class
{
	public :
		void display()
		{
			cout<<"Hello from Parent class";
		}
};
class Child : public Parent//derived class
{
		
};
int main()
{
	Child c1;
	c1.display();
	return 0;
}
