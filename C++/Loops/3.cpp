#include<iostream>
using namespace std;
int main()
{
	int num,count=0,i,j;
	cout<<"Enter the number = ";
	cin>>num;//10
	cout<<"Prime numbers = ";
	for(i=num;i>=1;i--)
	{
		int n=i,cnt=0;
		for(j=2;j<n/2;j++)
		{
			if(n%j==0)
			{
				cnt++;
			}
		}
		if(cnt==0)
		{
			cout<<i<<" ";
			break;
		}
	}
	return 0;
}
