/*University 2->2 Using a friend function, find the average of three numb
from three diffferent classes. Write all necessary member functions and 
contructor for the classes.*/

#include<iostream>
using namespace std;

class c1
{
	int no;
	public:
		c1()
		{
			no=10;
		}
		
		friend void average();
};

class c2
{
	int no;
	public:
		c2()
		{
			no=20;
			
		}
		friend void average();
};

class c3
{
	 int no;
	 public:
	 	c3()
	 	{
	 		no=30;
	    }
	    friend void average();
		 
};

void average(); //-> Function Prototype-> Forward Declaration

int main()
{
	average();
	return 0;
}

void average()
{
	
	c1 ob1;
	c2 ob2;
	c3 ob3;
	
	int avg;
	
	cout<<"\nNumber 1 -> "<<ob1.no;
	cout<<"\nNumber 2 -> "<<ob2.no;
	cout<<"\nNumber 3 -> "<<ob3.no;
	
	avg=(ob1.no+ob2.no+ob3.no)/3;
	
	cout<<"\nAverage => "<<avg;
	
}
