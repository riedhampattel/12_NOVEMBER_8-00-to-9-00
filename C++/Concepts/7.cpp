#include<iostream>
using namespace std;
class Shape //abstract class
{
	public :
		virtual void draw() = 0; //pure virtual function
};
class Circle : public Shape
{
	public :
		void draw()
		{
			cout<<"\nThis is a circle";
		}
};
class Square : public Shape
{
	public :
		void draw()
		{
			cout<<"\nThis is a square";
		}
};
int main()
{
	Shape *s;//base class
	Circle c;//derived class
	Square sq;//derived class
	
	s = &c;
	s->draw();
	s = &sq;
	s->draw();
	return 0;
}
