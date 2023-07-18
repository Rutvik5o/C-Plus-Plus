//-> Example 2: Copy Constructor

//-> Programmer Does Explicity

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
		
		code()
		{
		}
		
		code(code &a)
		{
			id=a.id;
		}
};

int main()
{
	code obj1;
	obj1.insert(400);
	obj1.display();
	code obj2=obj1;       //Other Way -> code obj2(obj1);
	obj2.display();
	return 0;
}
	
