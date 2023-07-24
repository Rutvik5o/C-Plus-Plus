// Example -> Multilevel Inheritence

#include<iostream>
using namespace std;

class person
{
	char name[20];
	int age;
	public:
		void getdata()
		{
			cout<<"Name ->";
			cin>>name;
			cout<<"Age ->";
			cin>>age;
		}
		
		void display()
		{
			cout<<"Name =>"<<name<<endl;
			cout<<"Age =>"<<age<<endl;
		}
};

class employee : public person
{
	char company[100];
	public:
		void getdata()
		{
			person::getdata();
			cout<<"Name of the Company ->"<<endl;
			cin>>company;
		}
		
		void display()
		{
			person::display();
			cout<<"Name of the Company =>"<<company<<endl;
		}
};

class programmer : public employee
{
	int number;
	public:
		void getdata()
		{
			employee::getdata();
			cout<<"Number of Programming Language Known ->";
			cin>>number;
		}
		
		void display()
		{
			employee::display();
			cout<<"Number of Programming Language Known =>"<<number<<endl;
		}
		
};

int main()
{
	programmer a;
	cout<<"Enter the Data ->"<<endl;
	a.getdata();
	cout<<endl<<"Displaying Data=>"<<endl;
	a.display();
	return 0;
}


