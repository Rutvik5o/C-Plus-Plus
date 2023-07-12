// That example of character aray within class (data member) of function overloading & Array of objects

#include<iostream>
using namespace std;

class employee
{
	char name[40]; // character array within a class-> A Data Member
	float salary;
	
	public:
		void get_details();
		void display_details();
};

void employee :: get_details()
{
	cout<<"Enter Name -> ";
	cin>>name;
	cout<<"Enter Salary -> ";
	cin>>salary;
}

void employee :: display_details()
{
	cout<<"Name -> "<<name<<endl;
	cout<<"Salary -> "<<salary<<endl;
}

int main()
{
	int j;
	employee director[3];   //-> Array of 3 objects
	
	for(j=0;j<3;j++)
	 {
	 	  cout<<endl<<"Details of Director -> "<<"("<<j+1<<")"<<endl;
	 	  director[j].get_details();
	 	  
	 }
	 
	 cout<<endl;
	 
	 for(j=0;j<3;j++)
	 {
	 	cout<<endl<<"The Entered Details of Director"<<j+1<<endl;
	 	director[j].display_details();
	}
	
	cout<<endl;
	
	return 0;
	 
}
