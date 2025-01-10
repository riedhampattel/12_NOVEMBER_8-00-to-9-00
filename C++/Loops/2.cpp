#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int start,end,i,j;
	cout<<"Enter the starting value = ";
	cin>>start;//5
	cout<<"Enter the ending value = ";
	cin>>end;//100
	cout<<"Armstrong numbers = ";
	for(i=start;i<=end;i++)
	{
		int digit=0,sum=0;
		int num = i,temp = i;
		while(num!=0)
		{
			num = num/10;
			digit++;
		}
		for(j=1;j<=digit;j++)
		{
			int rem = temp%10;
			int power = pow(rem,digit);
			sum = sum + power;
			temp = temp/10;
		}
		if(sum==i)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
