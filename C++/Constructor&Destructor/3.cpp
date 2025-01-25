#include<iostream>
using namespace std;
class Demo
{
	private :
		int id;
		string name;
	public :
		Demo(int i,string n)
		{
			id = i;
			name = n;
		}
		void get()
		{
			cout<<"\nId = "<<id;
			cout<<"\nName = "<<name;
		}
		Demo(Demo &obj)
		{
			cout<<"\nCopy constructor called";
			id = obj.id;
			name = obj.name;
		}
};
int main()
{
	Demo d1(101,"Rahul");
	Demo d2=d1;//copy constructor
	Demo d3(d1);//copy constructor
	
	d1.get();
	d2.get();
	d3.get();
	return 0;
}
