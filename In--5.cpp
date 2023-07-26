//Example 5-> HyBrid(Virtual) Inheritence -> More than one type of inheritence

#include<iostream>
using namespace std;

class Vehicle // Base Class
{
	public:
		Vehicle()
		{
			cout<<"This is Vehicle"<<endl;
		}
};

class Fare // Base class
{
  public:
  	Fare()
  	{
  		cout<<"Fare of Vechicle";
	}
	
};

class Car:public Vehicle //First Sub Class-> Hierarchical Inheritence
{
	
};
	

class Bus:public Vehicle,public Fare //Second Sub Class -> Multiple Inheritence
{
	
};                                       //Vehicle-> Car,Bus -> Hierarchical Inheritence
                                         //Vehicle,Fare-> Bus -> Multiple Inheritence

int main()
{
	Car obj1;   //Optional
	Bus obj2; // ->Creating Object of sub class wwill invoke the constructer of base class
	return 0;
}
