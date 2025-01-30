#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream MyFile("second.txt");
	MyFile<<"Hello How are you?";
	MyFile.close();
	return 0;
}
