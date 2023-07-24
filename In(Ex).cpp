// Example-1 => Example of Inheritence

#include<iostream>
using namespace std;

class Shape // -> Base class
{
	public:
		void setWidth(int w)
		{
			width=w;
		}
		
		void setHeight(int h)
		{
			height=h;
		}
		
		protected:
			 
			 int width;
			 int height;
}; 

// Here Derived Class

class Rectangle:public Shape
{
	public:
		
		int getArea()
		{
			return (width * height);
		}
};
		
int main()
{
	Rectangle ob1;
	ob1.setWidth(100);
	ob1.setHeight(38);
	// Displayiing the area of the object
	cout<<"Total Area:-> "<<ob1.getArea()<<endl;
	return 0;
}
