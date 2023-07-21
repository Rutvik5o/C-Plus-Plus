// Example -4 -> Dynamic Memory Allocation

#include<iostream>
using namespace std;

class A{
	
	private:
		int a;
		int b;
		
	public:
		void get_data(int,int);
		void put_data();
		
};

void A::get_data(int x,int y)
{
	a=x;
	b=y;
}

void A::put_data()
{
	cout<<"The value of a -> "<<a<<endl;
	cout<<"The value of b -> "<<b<<endl;
 } 
 
 int main()
 {
 	A *ptr=new A; // creates an object without and returns its address
 	// Other way to define ->// A *ptr;
 	                         // ptr = new A;
 	ptr->get_data(10,20);
 	ptr->put_data();
 	return 0;
 }
