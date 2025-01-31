#include<iostream>
using namespace std;
template <typename T>
void swapping(T &a,T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	int a=10,b=20;
	
	cout<<"\nvalue of a before swapping = "<<a;
	cout<<"\nvalue of b before swapping = "<<b;
	
	swapping(a,b);
	
	cout<<"\nvalue of a after swapping = "<<a;
	cout<<"\nvalue of b after swapping = "<<b;
	
	float f1=25.65,f2=85.56;
	
	cout<<"\nvalue of f1 before swapping = "<<f1;
	cout<<"\nvalue of f2 before swapping = "<<f2;
	
	swapping(f1,f2);
	
	cout<<"\nvalue of f1 after swapping = "<<f1;
	cout<<"\nvalue of f2 after swapping = "<<f2;
	
	char c1='A',c2='B';
	
	cout<<"\nvalue of c1 before swapping = "<<c1;
	cout<<"\nvalue of c2 before swapping = "<<c2;
	
	swapping(c1,c2);
	
	cout<<"\nvalue of c1 after swapping = "<<c1;
	cout<<"\nvalue of c2 after swapping = "<<c2;
	
	string s1="TOPS",s2="Institute";
	
	cout<<"\nvalue of s1 before swapping = "<<s1;
	cout<<"\nvalue of s2 before swapping = "<<s2;
	
	swapping(s1,s2);
	
	cout<<"\nvalue of s1 after swapping = "<<s1;
	cout<<"\nvalue of s2 after swapping = "<<s2;
	return 0;
}
