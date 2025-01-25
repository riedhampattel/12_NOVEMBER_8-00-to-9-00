#include<iostream>
using namespace std;
class Demo
{
	public :
		Demo()//default constructor
		{
			cout<<"\nObject created";
		}
		~Demo()//destructor
		{
			cout<<"\nObject destroyed";
		}
};
int main()
{
	Demo d1,d2,d3;
	return 0;
}
