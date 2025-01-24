#include<iostream>
using namespace std;
class GrandFather
{
	public :
		void display1()
		{
			cout<<"\nHello from GrandFather class";	
		}	
};
class Uncle : public GrandFather
{
	public :
		void display2()
		{
			cout<<"\nHello from Uncle class";	
		}	
};
class Cousin : public Uncle
{
};
class Father : public GrandFather
{
	public :
		void display3()
		{
			cout<<"\nHello from Father class";	
		}	
};
class Child : public Father
{
	
};
int main()
{
	Child c;
	c.display1();
	c.display3();
	Cousin cs;
	cs.display1();
	cs.display2();
	Father f;
	f.display1();
	Uncle u;
	u.display1();
	return 0;
}
