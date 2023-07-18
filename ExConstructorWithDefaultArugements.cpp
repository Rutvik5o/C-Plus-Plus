//-> Constructor with Default Arguments


#include<iostream>
using namespace std;

class A
{
      int add;
      public:
      	
      	A(int,int=10);
};

A::A(int x,int y)
{
	 add=x+y;
	 cout<<"Sum of Two Given Number -> "<<add<<endl;
}

int main()
{
	A hey(29,39);
	A hey2(539);
	return 0;
}
