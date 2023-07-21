// University 2->(1) Using friend function find the maximum number from given two numbers
//from two different classes. Write all necessary functions and constructor for the program.

#include <iostream>
using namespace std;

// Optional -> class c2; // Forward declaration for c2 class since it's used in c1 class as a friend.

class c1
{
	int no;

public:
	c1()
	{
		no = 10;
	}

	friend void max();
};

class c2
{
	int no;

public:
	c2()
	{
		no = 20;
	}

	friend void max();
};

void max(); // Function prototype/forward declaration

int main()
{
	max(); // Call the max() function -> we can also delcar object of class here
	return 0;
}

void max()
{
	c1 o1; // Declare object of class c1
	c2 o2; // Declare object of class c2

	cout << "\nNumber 1 -> " << o1.no;
	cout << "\nNumber 2 -> " << o2.no;

	if (o1.no > o2.no)
		cout << endl << o1.no << " is larger.";
	else
		cout << endl << o2.no << " is larger.";
}

