// Friend non-member Function

#include<iostream>
using namespace std;

class base{
	
	int value1,value2;
	
	public:
		void get()
		{
			cout<<"Enter Two Values->";
			cin>>value1>>value2;
		}
		
		friend float mean(base obj1); // Prototype of friend function
};

float mean(base obj1) // friend function defination
{
	return float(obj1.value1 + obj1.value2)/2; // accessing private data members of the object
}

int main()
{
	base obj1;
	obj1.get();
	cout<<"Mean value is->"<<mean(obj1)<<endl;
	return 0;
}
