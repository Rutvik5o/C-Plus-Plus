/* University 2 ->(4) Create Calender class with day, month and year 
as data members.Include default and parameterized constructors to
initialize a Calender object with a valid data value. Define a 
function AddDays() to add days to the Calender object. Define a 
display function to show data in "dd/mm/yyyy" format. */

#include<iostream>
using namespace std;

class calender
{
	int day,month,year;
	public:
		calender(){}
		calender(int d,int m,int y)
		{
			day=d;
			month=m;
			year=y;
	    }
			
		void AddDays(int d)
		{
			day=day+d;
		}
		
		void display()
		{
			cout<<"\nDate -> "<<day<<"/"<<month<<"/"<<year;
		}
};

int main()
{
	calender d1(15,06,2023);
	d1.display();
	d1.AddDays(5);
	d1.display();
	return 0;
}

