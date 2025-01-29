#include<iostream>
using namespace std;
class Demo
{
	private :
		int id;
		string name;
		int age;
	public :
		void set(int id,string name,int age)
		{
			this->id = id;
			this->name = name;
			this->age = age;
		}
		void get()
		{
			cout<<"\nId = "<<id;
			cout<<"\nName = "<<name;
			cout<<"\nAge = "<<age;
		}
};
int main()
{
	Demo d1;
	d1.set(101,"Rohan",25);
	d1.get();
	return 0;
}
