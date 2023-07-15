//2nd Example of constructer

/* class A
{
   A(){} // Default Constructor
   A(int,int) // Parameterised Constructor
   {
      //
  }
  A(int,int,int) // Paramteerised Constructor
  {
     //
 }
 */

#include<iostream>
using namespace std;

class A
{
	int a;
	
	public:
		 int get();
		 A(void); // added
		 
};

A::A()   // constructor defined outside the class declaration
{
	a=5;
}

int A::get()
{
	return a;
	
}

int main()
{
	A a1;
	cout<<a1.get()<<endl;
	return 0;
}
