// -> Example-1 Copy Constructor

//-> Complier Does Implicity

#include<iostream>
using namespace std;

class code
{
	int id;
	
	public:
		void insert(int x)
		{
			id=x;
		}
		void display()
		{
			cout<<"Value As You Given => "<<id<<endl;
		}
};

int main()
{
	code obj1;
	obj1.insert(1001);
	obj1.display();
	code obj2=obj1;
	obj2.display();
	return 0;
}
