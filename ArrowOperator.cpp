#include<iostream>
using namespace std;

class simple{
	int a;
	int b;
	
	public:
		int c;
		int add(int,int);
};

int simple ::add(int x,int y)
{
	a=x;
	b=y;
	return (a+b);
	
}

int main()
{
	int sum;
	simple e;
	sum=e.add(6,5);  // sum of that 
	cout<<"Sum Of given Actual Argument:"<<sum<<endl;
	
	e.c=10;
	cout<<"Varible C In value allocated:"<<e.c<<endl;
	
	simple *e1=&e;
	sum=e1->add(5,25);
	
	cout<<"Sum of given Actual Argument using Arrow Operator:"<<sum<<endl; //acessing the class member using arror operator
	
	e1->c=20; //acessing and also can change the value of variable using arrow operator
	
	cout<<"Changed value using Arrow Opeator:"<<e1->c<<endl;
	
	return 0;
}
