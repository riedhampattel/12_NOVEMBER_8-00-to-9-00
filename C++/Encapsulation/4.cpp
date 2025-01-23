//Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
#include<iostream>
using namespace std;
class BankAccount
{
	private :
		double acno;
		double balance;
	public :
		void set(double a,double b)
		{
			acno = a;
			balance = b;	
		}	
		void deposit(double d)
		{
			balance = balance + d;
		}
		void withdraw(double w)
		{
			if(w<balance)
			{
				balance = balance - w;
			}
			else
			{
				cout<<"\nWithdrawl is not possible";
			}
		}
		void get()
		{
			cout<<"\nAccount no. = "<<acno;
			cout<<"\nBalance = "<<balance<<endl;
		}
};
int main()
{
	BankAccount b1,b2;
	b1.set(123456,10000);
	b2.set(789456,25000);
	b1.deposit(2500);
	b1.withdraw(10000);
	b2.deposit(40000);
	b2.withdraw(70000);
	
	b1.get();
	b2.get();
	return 0;
}
