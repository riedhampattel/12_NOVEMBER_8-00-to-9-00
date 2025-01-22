#include<iostream>
using namespace std;
class Student
{
	private :
		int id;
		string name;
	public :
		void set(int i,string s)
		{
			id = i;
			name = s;
		}
		void get()
		{
			cout<<"\nId = "<<id;
			cout<<"\nName = "<<name;
		}
};
int main()
{
	Student s1;
	s1.set(101,"Rahul");
	Student s2;
	s2.set(102,"Mahesh");
	Student s3;
	
	s1.get();
	s2.get();
	s3.get();
	return 0;
}
