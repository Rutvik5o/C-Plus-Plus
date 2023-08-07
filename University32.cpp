/* University 3-> (2) Create a base class shape. Use this class to store
two double type values that could be used to compute the area of figures.
Derive two specific classes called triangle and rectangle from the base 
shape. Add to the base class, a member function get_data() to intitailize 
the base class data members and another member function display_area() to
compute and display the area of figures. Make display_area() as a virtual 
function and reedefine this function in the derived class to suit their
requirements. */

#include<iostream>
#include<math.h>
using namespace std;

class shape
{
	public:
		
		virtual void getdata(){}
		virtual void displayarea(){}
};

class rectangle : public shape
{
	float recside1,recside2;
	
	public:
		
		void getdata()
		{
			cout<<"\nEnter Rectangle Side 1-> ";
			cin>>recside1;
			
			cout<<"\nEnter Rectangle Side 2-> ";
			cin>>recside2;
		}
		
		void displayarea()
		{
			cout<<"\nArea of Rectangle=> "<<recside1*recside2<<" Sq.Units"<<endl;
		}
};

class triangle : public shape
{
	float recside1,recside2,triside1,triside2,triside3,s,area;
	
	public:
		
		void getdata()
		{
			cout<<"\nEnter Triangle Side 1-> ";
			cin>>triside1;
			
			cout<<"\nEnter Triangle Side 2-> ";
			cin>>triside2;
			
			cout<<"\nEnter Triangle Side 3-> ";
			cin>>triside3;
		}
		
    void displayarea()
    {
        s = (triside1 + triside2 + triside3) / 2;

        cout << endl << "Value of Semi-Perimeter is=> " << s << endl;

        area = sqrt(s * (s - triside1) * (s - triside2) * (s - triside3));

        cout << "\nArea of Triangle=> " << area << " Sq.Units";
    }
};

int main()
{
	shape *ptr;
	rectangle r1;
	triangle t1;
	
	ptr=&r1;
	ptr->getdata();
	ptr->displayarea();
	
	ptr=&t1;
	ptr->getdata();
	ptr->displayarea();
	
	return 0;
}

