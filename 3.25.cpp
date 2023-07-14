// Nested Classes

#include<iostream>
using namespace std;

class enclose // outer class
{
	 private:
	 	  int a;
	 	  double b;
	 	  
	public:
		 void set_enclose();
		 void get_enclose();
		 
		 
		 class inner // inner class
		 {
		 	 private:
		 	 	
		 	 	int c;
		 	 	double d;
		 	 	
		 	 	public:
		 	 		void set_inner()
		 	 		{
		 	 			c=5;
		 	 			d=2.5;
					}
					
					void get_inner()
					{
						cout<<"Value of C -> "<<c<<endl;
						cout<<"Value of D -> "<<d<<endl;
					}
		 };
};

void enclose :: set_enclose()
{
	 a=9;
	 b=10.12;
}

void enclose :: get_enclose()
{
	cout<<"Value of A -> "<<a<<endl;
	cout<<"Value of B -> "<<b<<endl;
}

int main()
{
	enclose e;                 // -> Outer Class object
	e.set_enclose();
	e.get_enclose();
	
	enclose :: inner i;        // -> Inner Class object
	i.set_inner();
	i.get_inner();
	return 0;
}
