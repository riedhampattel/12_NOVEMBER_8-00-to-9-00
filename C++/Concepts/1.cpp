#include<iostream>
using namespace std;
int main()
{
	string food = "Pizza";
	string &item = food;
	string &temp = food;
	
	item = "Noodles";
	
	cout<<"\nValue of food = "<<food;
	cout<<"\nValue of item = "<<item;
	
	cout<<"\nAddress of food = "<<&food;
	cout<<"\nAddress of item = "<<&item;
	return 0;
}
