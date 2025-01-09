#include<iostream>
using namespace std;
int main()
{
	int roll,sub1,sub2,sub3;
	string name;
	
	cout<<"Enter the roll no. = ";
	cin>>roll;
	cout<<"Enter the name = ";
	cin>>name;
	cout<<"Enter the marks of sub1 = ";
	cin>>sub1;
	cout<<"Enter the marks of sub2 = ";
	cin>>sub2;
	cout<<"Enter the marks of sub3 = ";
	cin>>sub2;
	
	int total = sub1+sub2+sub3;
	double perc = (double)total/(double)3;
	
	cout<<"Roll no. = "<<roll<<endl;
	cout<<"Name = "<<name<<endl;
	cout<<"Total marks = "<<total<<endl;
	cout<<"Percentage = "<<perc<<endl;
	if(perc>=1 && perc<=45)
	{
		cout<<"Grade = C";
	}
	else if(perc>45 && perc<=80)
	{
		cout<<"Grade = B";
	}
	else
	{
		cout<<"Grade = A";
	}
	return 0;
}
