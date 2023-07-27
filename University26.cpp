/* University 2->(6) Write a base class named Employee and derive
classes Male employee and Female Employee from it. Every employee
has an id, name and a scale of salary. Make a function ComputePay
(in hours) to compute the weekly payment of every employee.A Male
employee is paid on the number of days and houes he works. The 
female gets paid the wages for 40 hours a week, no matter what the 
actual hours are. Test this program to calculate the pay of 
employee. */

#include<iostream>
using namespace std;

class employee
{
	int id;
	char name[20];
	float salary;
	
	protected:
		void ComputePay(int hours)
		{
			salary=600*hours;
		}
		
		void input()
		{
			cout<<"\nEnter Employee ID-> ";
			cin>>id;
			cout<<"_____________________\n";
			cout<<"\nEnter Name-> ";
			cin>>name;
		}
		
		void display()
		{
			cout<<"\nEmployee ID=> "<<id<<endl;
			cout<<"\nName=> "<<name<<endl;
			cout<<"\nWeekly Salary=> Rs."<<salary<<endl;
		}
	
	
};

class male:public employee
{
	int hours;
	
	public:
		void salary()
		{
			input();
			cout<<"_____________________\n";
			cout<<"Enter Hours are Worked-> ";
			cin>>hours;
			ComputePay(hours);
		}
		
		void output()
		{
			display();
		}	
};

class female:public employee
{
	public:
		void salary()
		{
			input();
			ComputePay(40);
		}
		
		void output()
		{
			display();
		}
};

int main()
{
	male m1;
	m1.salary();
	
	female f1;
	f1.salary();
	
	
	cout<<"\n_______________________\nEmployee Details\n_______________________\n";
		
	m1.output();
	cout<<endl;
	f1.output();
	return 0;
}
