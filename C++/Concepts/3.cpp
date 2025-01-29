#include<iostream>
using namespace std;
class Student
{
	public :
		int id;
		string name;
		int marks;//out of 500
		double per = double(marks)/(double)5;
		char grade;
		void grd()
		{
			if(per<=35)
			{
				cout<<"C";
			}
			else if(per<=80)
			{
				cout<<"B";
			}
			else
			{
				cout<<"A";
			}	
		}
};
class Address
{
	private :
		string city;
		Student *ref;
	public :
		Address(string c,Student &obj)
		{
			city = c;
			ref = obj;
		}
		void display()
		{
			cout<<"\nId = "<<*ref.id;
			cout<<"\nName = "<<*ref.name;
			cout<<"\nGrade = "<<*ref.grd();
			cout<<"\nCity = "<<city;
		}
};
int main()
{
	Student s1,s2;
	s1.id = 101;
	s1.name = "Rohan";
	s1.marks = 350;
	
	s2.id = 102;
	s2.name = "Dhyana";
	s2.marks = 427;
	
	Address a1("Rajkot",s1);
	a1.display();
	Address a2("Surat",s2);
	a2.display();
	return 0;
}
