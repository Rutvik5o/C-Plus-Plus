#include<iostream>
using namespace std;


struct minestruct{
  int myNum;
  string myString;
};

int main()
{
 minestruct hey;


hey.myNum = 1;
hey.myString = "Hello Welcome to our Program!";

cout << hey.myNum << "\n";
cout << hey.myString << "\n";

}