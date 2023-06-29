#include<iostream>
using namespace std;

struct stud{

    int RollNumber;
    char Name[10];
    int English,Science,Social_Science,Maths,Average;
};

int main()
{
    struct stud s[2];
    int i,j,n;
    
    cout<<"How Many Records of Student's Data You Wanna Store:"<<endl;
    cin>>n;

    cout<<"Enter the following data of students:"<<endl;

    for(i=0;i<n;i++)
    {
    	 cout<<"\n Enter the Student Name:";
         cin>>s[i].Name;
         cout<<"\n Enter the Roll Number:";
         cin>>s[i].RollNumber;
         cout<<"\n Enter Marks of English:";
         cin>>s[i].English;
         cout<<"\n Enter Marks of Maths:";
         cin>>s[i].Maths;
         cout<<"\n Enter Marks of Science:";
         cin>>s[i].Science;
         cout<<"\n Enter Marks of Social Science:";
         cin>>s[i].Social_Science;

         s[i].Average=s[i].English+s[i].Maths+s[i].Science+s[i].Social_Science/4;

         cout<<"Percentage is:"<<s[i].Average<<"%"<<endl;
    }

cout<<"Our Data of Students:";

for(j=0;j<n;j++)
{
    cout<<"Student Name:"<<s[j].Name<<endl;
    cout<<"Student RollNumber:"<<s[j].RollNumber<<endl;
    cout<<"Student's Marks Total:"<<s[j].Average<<endl;
}

    return 0;
}
