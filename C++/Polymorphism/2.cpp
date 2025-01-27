#include<iostream>
using namespace std;
class Shape
{
	public :
		void shape(int side)
		{
			cout<<"\nArea of a square = "<<side*side;
		}
		void shape(double radius)
		{
			cout<<"\nArea of a circle = "<<2*(3.14*radius);
		}
		void shape(int l,int b)
		{
			cout<<"\nArea of a rectangle = "<<l*b;
		}
		void shape(int b,double h)
		{
			cout<<"\nArea of a triangle = "<<0.5*(b*h);
		}
};
int main()
{
	Shape s1;
	s1.shape(10);
	s1.shape(5.5);
	s1.shape(6,7);
	s1.shape(10,5.6);
	return 0;
}
