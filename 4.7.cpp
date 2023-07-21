// Example -3 -> Dynamic Memory De-allocation
// Using class

#include<iostream>
using namespace std;

class A
{
	int a;
	int b;
	public:
		void get_data(int,int);
		void put_data();
		
};

void A::get_data(int x, int y)
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
	A *ptr= new A;
	
	ptr->get_data(100,200);
	ptr->put_data();
	return 0;
}
