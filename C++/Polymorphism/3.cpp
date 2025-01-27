#include<iostream>
using namespace std;
class Demo
{
	private :
		int x;
		int y;
	public :
		Demo()
		{
			x = 0;
			y = 0;
		}
		Demo(int a,int b)
		{
			x = a;
			y = b;
		}
		Demo operator+(Demo &obj)
		{
			Demo temp;
			temp.x = x + obj.x;
			temp.y = y + obj.y;
			return temp;
		}
		void get()
		{
			cout<<"\nValue of x = "<<x;
			cout<<"\nValue of y = "<<y<<endl;
		}
};
int main()
{
	int a = 10;
	int b = 20;
	int ans = a+b;
	
	Demo d1(4,5);
	Demo d2(8,4);
	Demo d3=d1+d2;
	
	d1.get();
	d2.get();
	d3.get();
	return 0;
}
