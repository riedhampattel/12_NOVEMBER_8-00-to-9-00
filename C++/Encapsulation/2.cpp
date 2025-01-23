//Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
#include<iostream>
using namespace std;
class Circle
{
	private :
		double radius;
	public :
		void set(double r)
		{
			radius = r;
		}
		double area()
		{
			return 3.14*(radius*radius);
		}
		double circumference()
		{
			return 2*(3.14*radius);
		}
};
int main()
{
	Circle c1;
	c1.set(5.6);
	double a = c1.area();
	double c = c1.circumference();
	cout<<"\nArea of circle is = "<<a;
	cout<<"\nCircumference of circle is = "<<c;
	return 0;
}
