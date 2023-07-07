// Nested Member Functions
#include<iostream>
using namespace std;

class simple
{
	 int x;
	 
	public:
		void set_data(int);
		int get_data(void);
		void message(char *);
};

void simple :: set_data(int a)
{
	x=a;
	message("Welcome");  //Nested Member function
}

int simple :: get_data(void)
{
	message("to Our Program"); // Nested Member function
	return x;
}

void simple :: message(char *s)
{
	cout<<s<<endl;
}

int main()
{
	simple e;
	e.set_data(5);
	cout<<e.get_data()<<endl;
	return 0;
}

