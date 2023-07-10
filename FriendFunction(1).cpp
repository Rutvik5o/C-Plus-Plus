#include<iostream>
using namespace std;

class ABC;
class XYZ{
	private:
		char ch;
		int num;
		
	public:
		//This statement would make class ABC a friend class of XYZ,
		// this means that ABC can acess the private and protected 
		// members of xyx class.
		
		void get()
		{
			cout<<"Enter Character:"<<endl;
			cin>>ch;
			
			cout<<"Enter Numbers:"<<endl;
			cin>>num;
		}
		
		friend class ABC;
};
class ABC{
	public:
		void disp(XYZ obj2)
		{
			cout<<obj2.ch<<endl;
			cout<<obj2.num<<endl;
		}
};

int main()
{
	ABC obj;
	XYZ obj2;
	
	obj2.get();
	obj.disp(obj2);
	return 0;
}
