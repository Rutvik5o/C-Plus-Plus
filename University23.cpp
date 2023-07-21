/*Univesity 2-> (3) Define Currency class which contains rupees and paisa as data
members. Write a friend function named AddCurrency() which add 2 different Currency
objects and return a Currency object. Write parameterized constructor to intialize 
the values and use appropriate functions to get the details from the user
and display it */

#include<iostream>
using namespace std;

class currency
{
	int rupee,paisa;
	 public:
	 	currency(){}
	 	
		currency(int r,int p)
		{
			rupee=r;
			paisa=p;
		}
		
		void display()
		{
			cout<<"\nCurrency = Rupee -> "<<rupee<<" &"<<" Paisa -> "<<paisa;
		}
		
		friend currency AddCurrency(currency,currency);
		
};

currency AddCurrency(currency,currency);

int main()
{
	currency c1(49,51);
	c1.display();
	currency c2(51,49);
	c2.display();
	
	currency c3=AddCurrency(c1,c2);
	c3.display();
	
	return 0;
}

currency AddCurrency(currency a,currency b)
{
	currency c;
	c.rupee= a.rupee+b.rupee;
	c.paisa= a.paisa+b.paisa;
}
