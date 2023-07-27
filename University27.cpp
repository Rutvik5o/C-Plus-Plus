/*University 2->(7)Create a class called scheme with scheme_id,
scheme_name,outgoing_rate, and message_charge. Derive customer
class form scheme and include cust_id, name and mobile_no data.
Define necessary functions to read and sisplay data. Create
a menu driven program to read call and message information 
for a customer and display the detail bill. */

#include<iostream>
using namespace std;

class scheme
{
	protected:
		int id;
		float outrate,msgcharge;
		char name[10];
		
	public:
		void getdata()
		{
			cout<<"\n->Scheme Details:";
			cout<<"\nEnter Scheme ID-> ";
			cin>>id;
			cout<<"\nEnter Scheme Name-> ";
			cin>>name;
			cout<<"\nEnter call outgoing rate per minute-> Rs.";
			cin>>outrate;
			cout<<"\nEnter message charge per message-> Rs.";
			cin>>msgcharge;
		}
};

class customer:public scheme
{
	int id,calltime,msgcount,phone;
	char name[20];
	float callbill,msgbill,totalbill;
	
	public:
		customer()
		{
			cout<<"\n->Customer Details:";
			cout<<"\nEnter Customer ID-> ";
			cin>>id;
			cout<<"\nEnter Customer Name-> ";
			cin>>name;
			cout<<"\nEnter Phone Number-> ";
			cin>>phone;
			getdata();
			
			cout<<"\n->Usage Details:\nTotal Call Time(Min)-> ";
			cin>>calltime;
			cout<<"\nTotal Message-> ";
			cin>>msgcount;
			
			
		}
		
		void print()
		{
			callbill=outrate*calltime;
			msgbill=msgcharge*msgcount;
			totalbill=callbill+msgbill;
			cout<<"\n\n->Billing Details:\n";
			cout<<"1.Call Bill => Rs."<<callbill<<endl;
			cout<<"2.Message Bill => Rs."<<msgbill<<endl;
			
			cout<<"->Total Bill => Rs."<<totalbill;
		}
};

int main()
{
	customer c1;
	c1.print();
	return 0;
}
