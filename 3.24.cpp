// Return objects from functions 

#include<iostream>
using namespace std;


class student
{
	int m1,m2;
	
	public:
		 void get()
		 {
		 	cout<<"Enter the Marks M1 -> ";
		 	cin>>m1;
		 	
		 	cout<<"Enter the Marks M2 -> ";
		 	cin>>m2;
		 }
		 
		 void show()
		 {
		 	cout<<"Marks in M1 -> "<<m1<<endl;
		 	cout<<"Marks in M2 -> "<<m2<<endl;
		 }
		 
		 student increased (student);
};

student student :: increased (student s) // -> return s3 s1::increased(s2)
{
	student st;
	st.m1=m1+s.m1;   // -> m1= (any int value ) and s.m1= ( increased value)
	
	st.m2=m2+s.m2;   // -> m2= (any int value ) and s.m2= ( increased value)
	return (st);
}

int main()
{
	student s1,s2,s3;
	cout<<"Enter the student's Marks ^_^ "<<endl;
	s1.get();
	cout<<"Enter the increased Marks ^_____^  "<<endl;
	s2.get();
	
	s3=s1.increased(s2);
	
	s3.show();
	
	return 0;
}
