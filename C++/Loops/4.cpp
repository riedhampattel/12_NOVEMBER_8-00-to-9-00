#include<iostream>
using namespace std;
int main()
{
	int n1,n2,gcd,i;
	cout<<"Enter the value of n1 = ";
	cin>>n1;//4
	cout<<"Enter the value of n2 = ";
	cin>>n2;//10
	int cnt = n1<n2 ? n1:n2;
	for(i=1;i<=cnt;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			gcd = i;
		}
	}
	cout<<gcd<<" is a gcd of "<<n1<<" and "<<n2;
	return 0;
}
