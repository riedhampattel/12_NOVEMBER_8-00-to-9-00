#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream MyFile("first.txt");
	string text;
	while(getline(MyFile,text))
	{
		cout<<text<<endl;
	}
	MyFile.close();
	return 0;
}
