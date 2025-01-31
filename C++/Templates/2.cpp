#include<iostream>
using namespace std;
template <typename T,int size>
void sorting(T (&a)[size])
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]>a[j])
			{
				T temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
int main()
{
	int i;
	int a[5]={45,2,5,98,1};
	cout<<"\nArray before sorting = ";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	sorting(a);
	cout<<"\nArray after sorting = ";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<" ";
	}
	
	double d[5]={25.45,2.3,98.1,40.36,0.5};
	cout<<"\nArray before sorting = ";
	for(i=0;i<5;i++)
	{
		cout<<d[i]<<" ";
	}
	
	sorting(d);
	
	cout<<"\nArray after sorting = ";
	for(i=0;i<5;i++)
	{
		cout<<d[i]<<" ";
	}
	
	char ch[5]={'A','B','Z','a','T'};
	cout<<"\nArray before sorting = ";
	for(i=0;i<5;i++)
	{
		cout<<ch[i]<<" ";
	}
	
	sorting(ch);
	
	cout<<"\nArray after sorting = ";
	for(i=0;i<5;i++)
	{
		cout<<ch[i]<<" ";
	}
	return 0;
}
