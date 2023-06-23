#include<iostream>
using namespace std;

int area(int); //square

int area(int,int); // rectangle

float area(float,int); // circle


int main()
{
	 int l,b,r;
	 float pi=3.14;
	 
	 cout<<"\n1. Enter Side Of Square:";
	 cin>>l;
	 cout<<"-> Area of Square :"<<area(l)<<" Sq.units\n";
	 
	 cout<<"\n2. Enter Length and Breath of Rectangle:\n";
	 cin>>l>>b;
	 cout<<"->Area of Rectangle: "<<area(l,b)<<" Sq.units\n";
	 
	 cout<<"\n3.Enter Radius of Circle:";
	 cin>>r;
	 cout<<"->Area of Circle: "<<area(pi,r)<<" Sq.units\n";
	 
	 return 0;
}

int area(int side) //Square
{
	return side * side;
}

int area(int l,int b) // Rectangle
{
	return l*b;
}

float area(float pi,int r) // Circle
{
	return pi*r*r;
}
