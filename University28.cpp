/* University 2->(8) Write a program with use of inheritence:Define
a class publisher that stores the name of the title.Derive two clasess
book and tape,which inherit publisher. Book class contains member data
called page noand tape class contain time for playing. Define functions
in the appropriate classes to get and print the details.*/

#include<iostream>
using namespace std;


class Publisher
{
	protected:
		char title[20];
		
		void input()
		{
			cout<<"\nEnter Title Name-> ";
			cin>>title;
		}
};

class Book:public Publisher
{
	int pages;
	public:
		
		void input()
		{
			Publisher::input();
			cout<<"\nEnter No. of pages-> ";
			cin>>pages;
		}
		
		void display()
		{
			cout<<"\nTitle=> "<<title;
			cout<<"\nNo. of Pages=> "<<pages;
		}	
		
};


class Tape:public Publisher
{
	int time;
	public:
		void input()
		{
			cout<<"\nEnter Play Time(Min)-> ";
			cin>>time;
		}
		
		void display()
		{
			cout<<"\nPlay Time(Min)=> "<<time<<endl;
		}
};

int main()
{
     Book b1;
     Tape t1;
     
     b1.input();
     t1.input();
     
     cout<<"\nBook Details:\n";
     cout<<"______________________";
     
     
     b1.display();
     t1.display();
     
     return 0;
}
		
