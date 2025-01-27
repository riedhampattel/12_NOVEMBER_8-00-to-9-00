#include<iostream>
using namespace std;
class Shape
{
	public :
		Shape(int side)
		{
			cout<<"\nArea of a square = "<<side*side;
		}
		Shape(double radius)
		{
			cout<<"\nArea of a circle = "<<2*(3.14*radius);
		}
		Shape(int l,int b)
		{
			cout<<"\nArea of a rectangle = "<<l*b;
		}
		Shape(int b,double h)
		{
			cout<<"\nArea of a triangle = "<<0.5*(b*h);
		}
};
int main()
{
	Shape s1(10);
	Shape s2(5.5);	
	Shape s3(5,6);
	Shape s4(5,6.5);
	return 0;
}
