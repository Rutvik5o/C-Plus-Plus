#include<iostream>
using namespace std;

int & max(int&,int &);

int main()
{
	int x,y;
	x=1;
	y=2;
	
	
	int & ref=max(x,y); /* Actual Argument */
	
	cout<<"Maximum Number Is:"<<ref;
	
	return 0;
}

int & max(int &a, int &b) /* Formal Arguments */
{
	if(a>b)
	  return a;
	
	else
	  return b;
}
