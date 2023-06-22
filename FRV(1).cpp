#include <iostream>
using namespace std;

int main()
{
    int a = 20;

    int &s = a;

    cout <<s<<" "<< a << endl;
    return 0;
}
