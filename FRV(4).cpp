#include<iostream>
using namespace std;

int main()
{
	char *ptr="Hello";
	
	char *& ptr1=ptr;
	
	cout<<ptr<<" "<<ptr1<<endl;
	
	return 0;	
}
