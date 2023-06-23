#include<iostream>
using namespace std;

int sum(int x,int y,int z=0,int w=0)  // its also run if we did not declar z and w 
{
	return(x+y+z+w);
}

int main()
{
	cout<<sum(10,15)<<endl;
	cout<<sum(10,15,34)<<endl;
	cout<<sum(10,15,34,50)<<endl;
	
	return 0;
	
}
