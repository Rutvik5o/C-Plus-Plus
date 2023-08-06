// University 3-> (1) Create a class vehicel which stores the vehicleno and chassino as a member.
// Define another class for scooter,which inherits its data members of the class vehicle and has 
// a data member for a storing wheels and company. Define another class for which inherits the 
// data member of the class vehicle and has a data member for storing price and company. Display
// the data from derived class. Use virtual Function


#include<iostream>
using namespace std;

class vehicle
{
	protected:
		int num,chassis;
		
		public:
			
			void getdata()
			{
				cout<<"\nEnter Vehicle No-> ";
				cin>>num;
				
				cout<<"\nEnter Chassis No-> ";
				cin>>chassis;
			}
			
			virtual void print()
			{
				cout<<"\nVehicle No=> "<<num;
				cout<<"\nChassis No=> "<<chassis;
			}
};

class scooter: public vehicle
{
	int wheels;
	
	char company[20];
	
	public:
		
		scooter()
		{
			cout<<"\nEnter No. Of Wheels-> ";
			cin>>wheels;
			
			cout<<"\nEnter Company Name-> ";
			cin>>company;
		}
		
		void print()
		{
			cout<<"\nNo. Of Wheels=> "<<wheels;
			cout<<"\nCompany=> "<<company;
			
		}
};


class price:public vehicle
{
	float cost;
	public:
		
		price()
		{
			cout<<"\nEnter Price->Rs.";
			cin>>cost;
		}
		
		void print()
		{
			cout<<"\nPrice=>Rs. "<<cost;
		}
};

int main()
{
	vehicle v1;
	
	vehicle *ptr=&v1;
	
	ptr->getdata();
	ptr->print();
	
	scooter s1;
	price p1;
	
	ptr=&s1;
	ptr->print();
	
	ptr=&p1;
	ptr->print();
	
	return 0;
}
