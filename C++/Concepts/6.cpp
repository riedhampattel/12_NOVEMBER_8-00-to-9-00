#include<iostream>
using namespace std;
class Shape //abstract class
{
	public :
		virtual void draw()
		{
			cout<<"\nThis is a shape";
		}
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
		int draw(int side)
		{
			cout<<"\nThis is a square";
			return side*side;
		}
};
int main()
{
	Square s;
	int area = s.draw(5);
	return 0;
}
