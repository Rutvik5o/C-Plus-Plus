// Namespace

// -> Here we can see that more then once variabls are being used without reporting any
//     error. That is because they are declared in the different namespaces and scopes.

#include<iostream>
using namespace std;


namespace first // varibale created inside namespaces
{
	 int val=500;
}

int main()
{
	int val=200; // Local Variable
	
	// These variable can be accessed from outside the namespace using the 
	// scope resoultion operator ::
	
	cout<<first::val<<endl;
	return 0;
}

