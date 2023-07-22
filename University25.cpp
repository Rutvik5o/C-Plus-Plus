/* University 2->(5) Create a class named 'String' with one data 
member of type char *, which stores a string. Include default,
parameterized and copy constructor to initialize the data member.
write a program to test this class. */

#include<iostream>
#include<string.h>
using namespace std;

class String
{
	char ch[10];
	public:
		String() {}
		
		String(char *c)
		{
			strcpy(ch,c);
		}
		
		String(String &x)
		{
			strcpy(ch,x.ch);
		}
		
		void display()
		{
			cout<<"\nText -> "<<ch;
		}
};

int main()
{
	String ob1("Welcome to our Program");
	ob1.display();
	String ob2(ob1); // Copy Constructor called
	ob2.display();
}

