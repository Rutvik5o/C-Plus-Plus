#include<iostream>
using namespace std;

class A{
	friend void swap();
	
	int x;
	
	public:
		void input()
		{
			cout<<"X is:"<<endl;
			cin>>x;
		}
		
		void display()
		{
			cout<<"X is->"<<x<<endl;;
		}
};

class B{
	friend void swap();
	int y;
	
	public:
		void input()
		{
			cout<<"Y is:"<<endl;
			cin>>y;	
		}
		
		void display()
		{
			cout<<"Y is->"<<y<<endl;;
		}
};

void swap()
{
	int temp;
	A a;
	B b;
	a.input();
	b.input();
	
	cout<<"Before Swapping:"<<endl;
	a.display();
	b.display();
	
	temp=a.x;
	a.x=b.y;
	b.y=temp;
	
	cout<<"After Swapping:"<<endl;
	a.display();
	b.display();
}

int main()
{
	swap();
	return 0;
}
