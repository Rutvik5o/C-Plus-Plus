//Example 4-> Hierarchical Inheritence : 1 Parent :: Multiple Child

#include<iostream>
using namespace std;

class person
{
	char name[100];
	char gender[10];
	
	int age;
	public:
		void getdata()
		{
			cout<<"Enter Name-> "<<endl;
			cin>>name;
			cout<<"Enter Age-> "<<endl;
			cin>>age;
		}
		
		void display()
		{
			cout<<"Name is => "<<name<<endl;
			cout<<"Age is =>"<<age<<endl;
		}
};

class student:public person
{
	char institute[100];
	
	public:
		void getdata()
		{
			person::getdata();
			cout<<"Name of College/School-> ";
			cin>>institute;
		}
		
		void display()
		{
			person::display();
			cout<<"Name of College/School => "<<institute<<endl;
		}
};

class employee:public person
{
	char company[100];
	float salary;
	
	public:
		void getdata()
		{
			person::getdata();
			cout<<"Name of Company-> ";
			cin>>company;
			cout<<"Salary: Rs-> ";
			cin>>salary;
		}
		
		void display()
		{
			person::display();
			cout<<"Name of Company=> "<<company<<endl;
			cout<<"Salary: Rs=> "<<salary<<endl;
		}
};

int main()
{
	student s;
	employee e;
	
	cout<<"Student -> "<<endl;
	cout<<"Entering Data -> "<<endl;
	cout<<"____________________"<<endl;
	s.getdata();
	cout<<"____________________"<<endl;
	cout<<"____________________"<<endl;
	cout<<endl<<"Displaying Data => "<<endl;	
	s.display();
	cout<<"____________________"<<endl;
	
	cout<<"____________________"<<endl;
	cout<<"Employee -> "<<endl;
	cout<<"Entering Data -> "<<endl;
	e.getdata();
	cout<<"____________________"<<endl;
	cout<<"____________________"<<endl;
	cout<<endl<<"Displaying Data => "<<endl;
	e.display();
	cout<<"____________________"<<endl;
	return 0;
}
