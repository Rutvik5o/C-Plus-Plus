#include<iostream>
using namespace std;

class simple
{
    public:
         string name;
         void display()
         {
            cout<<"Name is:"<<name;
         }
};

int main()
{
  simple obj1;
  obj1.name="Nothing";
  obj1.display();
  return 0;
}