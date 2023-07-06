/* Write a program to illustrate the use of this pointer. */
#include<iostream>
using namespace std;
#include<string.h>

class student{
	int roll;
	char name[20];
	
	public:
		void get()
		{
			
			cout<<"\nEnter Student Name:"<<endl;
			cin>>name;
			
			cout<<"\nEnter Student Roll No:"<<endl;
			cin>>roll;
			
			this->roll=roll;
			strcpy(this->name,name);
		}
		
		void display()
		{
			cout<<"\nName:"<<name;
			cout<<"\nRoll No:"<<roll;
		}
};

int main()
{
	student s1;
	int roll;
	char name[20];
	s1.get();
	s1.display();
}




