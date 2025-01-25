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
		Demo()
		{
			
		}
};
int main()
{
	Demo d1(101,"Rahul");
	Demo d2;
	d1.get();
	return 0;
}
