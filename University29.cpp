//Program gives error
/* University 2->(9) Create a class account that scores customer 
name,account no, types of account. From this derive classes cur_acc
and sav_acc to include necessary member function to do the following:

* Accepts deposit from customer and update balance
* Compute and Deposit Interest
* Permit Withdrawl and Update balance.*/

#include<iostream>
#include<string.h>
using namespace std;

class Bank
{
	protected:
		int accno;
		char cname[20],acctype[8];
		
	public:
		void getdata()
		{
			cout<<"\nEnter A/C No-> ";
			cin>>accno;
			cout<<"\nEnter Customer Name-> ";
			cin>>cname;
		}
};

class Savings:public Bank
{
	float balance,rate,transfer,interest;
	
	public:
		Savings()
		{
			rate=7.5;
			strcpy(acctype,"Savings");
			getdata();
			cout<<"\nEnter Current Balance-> Rs.";
			cin>>balance;
	    }  
	    
	    void deposit()
	    {
	    	cout<<"\nEnter Amout to Deposit-> Rs.";
	    	cin>>transfer;
	    	
	    	balance+=transfer;
	    	
	    	cout<<"Current Balance => Rs."<<balance;
	    	
		}
		
		int withdraw()
		{
			cout<<"\nEnter Amount to Withdraw-> :Rs.";
			cin>>transfer;
			
			if(transfer>balance)
			{
				cout<<"\nError-> Insufficient Balance!";
				cout<<"\nCurrent Balance=> Rs."<<balance;
				
				return 0;
			}
			
			balance-=transfer;
			cout<<"Current Balance=> Rs."<<balance;
		}
		
		void interest()
		{
			interest=(balance*rate)/100;
			cout<<"\nInterest Per Year=> Rs."<<interest;
			cout<<"\nBalance With Interest: =>Rs."<<(balance+interest);
		}
		
		void print()
		{
			cout<<"\n->Account Details-\n->A/C NO=> "<<accno;
			cout<<"\n->A/C Type=>"<<acctype;
			cout<<"\n->Customer Name=>"<<cname;
			cout<<"\n->Current Balance=> Rs."<<balance;
			cout<<"\n->Interest Rate=>"<<rate;
			interest();
		}
};

class Current:public Bank
{
	float balance,rate,transfer,interest;
	
	public:
		Current()
		{
			rate=4.5;
			strcpy(acctype,"Current");
			getdata();
			cout<<"\nEnter Current Balance-> Rs.";
			cin>>balance;
		}
		
		void deposit()
		{
			cout<<"\nEnter Amount To Deposit-> Rs.";
			cin>>transfer;
			balance+=transfer;
			cout<<"Current Balance=> Rs."<<balance;	
		};
		
		int withdraw()
		{
			cout<<"\nEnter Amount To Withdraw-> Rs.";
			cin>>transfer;
			
			if(transfer>balance)
			{
				cout<<"\nError-> Insufficient Balance!";
				cout<<"\nCurrent Balance=> Rs."<<balance;
				
				return 0;
			}
			
			balance-=transfer;
			cout<<"Currnet Balance=> Rs."<<balance;
			return 0;
		}
		
		void interest
		{
			interest=(balance*rate)/100;
			cout<<"\nInterest Per Year=> Rs."<<interest;
			cout<<"\nBalance With Interest=> Rs."<<(balance+interest);
		}
		
		void print()
		{
			cout<<"\n->Account Details-\n->A/C NO=> "<<accno;
			cout<<"\n->A/C Type=>"<<acctype;
			cout<<"\n->Customer Name=>"<<cname;
			cout<<"\n->Current Balance=> Rs."<<balance;
			cout<<"\n->Interest Rate=>"<<rate;
			interest();
		}
		
};

int main()
{
	int ch;
	
	while(1)
	{
		cout<<"\nSelect Account Type:\n1.Savings\n2.Current\n3.Exit\nEnter Choice->";
		cin>>ch;
		
		if(ch==1)
		{
			Savings s1;
			
			while(1)
			{
				cout<<"\n1.Deposit\n2.Withdraw\n3.View Interest\n4.View all Details\n5.Exit\nEnter Choice->";
				cin>>ch;
				
				switch(ch)
				{
					case 1: s1.deposit();
					        break;
					        
					case 2: s1.withdraw();
					        break;
					        
					case 3: s1.interest();
					        break;
					        
					case 4: s1.print();
					        break;
					        
					default: return 0;
				}
				
				
			}
		}
		
		else if(ch==2)
		{
			Current c1;
			
			while(1)
			{
				cout<<"\n1.Deposit\n2.Withdraw\n3.View Interest\n4.View all Details\n5.Exit\nEnter Choice->";
				cin>>ch;
				
				switch(ch)
				{
					case 1: c1.deposit();
					        break;
					        
					case 2: c1.withdraw();
					        break;
					        
					case 3: c1.interest();
					        break;
					        
					case 4: c1.print();
					        break;
					        
					default: return 0;
			}
		}
		
		else
			return 0;
	}
}
