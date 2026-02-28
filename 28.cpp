//***************************************Copy Constructor**************************************
#include <iostream>
using namespace std;
class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }
    // When no copy constructor is found, compiler will supply its own copy constructor
    number(number &obj)
    {
        cout << endl;
        cout << "copy constructor called !!! " << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    number z1(x); // copy construcor invoked
    z1.display(); // z1 should exactly resemble the other object

    z2 = z; // copy constructor not invoked but value correctly printed
    z2.display();
    z2 = x;
    z2.display();
    number z3 = z; // copy constructor invoked
    z3.display();
    return 0;
}