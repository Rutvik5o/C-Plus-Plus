#include<iostream>
using namespace std;

int main()
{
	int s=20;
	int p=30;
	
	int &a=s;
	
	cout<<a<<endl;
	a=p;
	
	cout<<a<<endl;
	return 0;
}
