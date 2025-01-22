#include<iostream>
using namespace std;
class Student
{
	public :
		int id;
		string name;
};
int main()
{
	int a = 10;
	Student s1;
	s1.id = 10;
	s1.name = "Tirth";
	cout<<"\nId = "<<s1.id;
	cout<<"\nName = "<<s1.name;
	return 0;
}
