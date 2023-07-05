
/* #include<iostream>
using namespace std;

class circle{
	private:
		double radius;
		
	public:
		double compute_area()
		{
			return 3.14*radius*radius;
		}

};

int main()
{
	circle obj;
	// try to acess private data member
	// directly outside the class 
	obj.radius=1.5;
	
	cout<<"Area is:"<<obj.compute_area();
	return 0;
} */

#include<iostream>
using namespace std;

class circle
{
	private:
		double radius;
		
	public:
		void compute_area(double r)
		{                    //member function can access private data member radius
			radius=r;
			
			double area=3.14*radius*radius;
			
			cout<<"Radius is:"<<radius<<endl;
			cout<<"Area is:"<<area;
			
			
		}
};

int main()
{
	circle obj;
	
	obj.compute_area(1.5); // trying to acess private data directly outside the class
	
	return 0;
}
