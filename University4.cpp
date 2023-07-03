#include<iostream>
using namespace std;

class student
{
	int roll;
	char name[20];
	float t;
	float sci,maths,eng,c,cpp;
	
	public:
		void get()
		{
			cout<<"Enter Student Name:"<<endl;
			cin>>name;
			cout<<"Enter Roll No:"<<endl;
			cin>>roll;
			cout<<"Enter Marks of 5 subjects:"<<endl;
			cout<<"Enter Science Marks:"<<endl;
			cin>>sci;
			cout<<"Enter Maths Marks:"<<endl;
			cin>>maths;
			cout<<"Enter English Marks:"<<endl;
			cin>>eng;
			cout<<"Enter C Marks:"<<endl;
			cin>>c;
			cout<<"Enter C++ Marks:"<<endl;
			cin>>cpp;
		}
		
		
		void display()
		{
			cout<<"Name->"<<name<<endl;
			cout<<endl<<"Roll No->"<<roll<<endl;
			cout<<endl<<"Science Marks->"<<sci<<endl;
			cout<<endl<<"Maths Marks->"<<maths<<endl;
			cout<<endl<<"English Marks->"<<eng<<endl;
			cout<<endl<<"C Marks->"<<c<<endl;
			cout<<endl<<"C++ Marks->"<<cpp<<endl;
		}
		
		void total()
		{
			t=sci+maths+eng+c+cpp;
			cout<<endl<<"Total Marks are:"<<t<<endl;
		}
};

int main()
{
	student s;
	s.get();
	s.display();
	s.total();
	return 0;
}
