//C++ Program to demostrate protected access specifier
#include<iostream>
using namespace std;

class parent{
	protected:
		int id_protected;
};

class child:public parent
{
	public:
		void setId(int id)
		{
			id_protected=id;
		}
		
		void displayId()
		{
			cout<<"id_protected value is:"<<id_protected<<endl;
		}
};

int main()
{
       child obj;
       obj.setId(100);
       obj.displayId();
       
       return 0;
}
