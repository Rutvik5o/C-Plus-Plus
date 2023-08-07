//-> Example of PureVirtualFunction

#include<iostream>
using namespace std;


class shape
{
	protected:
		
		float l;
		
	public:
		
		void getdata()
		{
			cout<<"\nEnter Length or Radius-> ";
			cin>>l;
		}
		
		virtual float area()=0;
};

class circle:public shape
{
	public:
		
		float area()
		{
			return 3.14*l*l;
		}
};

class square: public shape
{
	public:
		
		float area()
		{
			return(l*l);
		}
};

int main()
{
	shape *ptr;
	
	circle c1;
	
	square s1;
	
	ptr=&c1;
	ptr->getdata();
	cout<<ptr->area();
	
	ptr=&s1;
	ptr->getdata();
	cout<<ptr->area();
	
	return 0;
}
