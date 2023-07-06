/* Write a program to call member functions of class in the main
function using pointer to object and pointer to member
function.  */
#include<iostream>
using namespace std;


class demo
{
	int no;
	public:
		void input()
		{
		    cin>>no;
		}
		
		void display()
		{
			cout<<no;
		}
		
};

int main()
{
	demo obj;
	demo *ptr=&obj;
	
	cout<<"\nEnter a Number:"<<endl;
	ptr->input();
	
	cout<<"\nNumber Entered:"<<endl;
	ptr->display();
	
	return 0;
}
	
