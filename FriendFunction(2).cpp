// Friend function using constructer
#include<iostream>
using namespace std;

class sample2;
class sample1{
	int a;
	public:
		sample1(int x)
		{
			a=x;
		}
		
		friend class sample2;
};


class sample2
{
	public:
		void abc(sample1 &p)
		{
			cout<<"The value of a in sample2 class:"<<p.a<<endl;
		}
};

int main()
{
	 sample1 s1(5);
	 sample2 s2;
	 s2.abc(s1);
	 return 0;
}
