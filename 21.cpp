//**********************Friend classes and its members************************
#include <iostream>
using namespace std;
// Forwatd Declaration of permission giving class
class complex;

class calculator
{
public:
    int sumrealcomplex(complex, complex);         /*only declared here,*/
    int sumcompcomplex(complex, complex);         /*definition after all the classes*/
};
class complex
{
    int a;
    int b;
    // friend int calculator :: sumrealcomplex(complex ob1, complexob2);       {to make only specific
    // friend int calculator :: sumcompcomplex(complex ob1, complexob2);         funtions friends}
    friend class calculator; // to make the whole class friend

public:

    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printno()
    {
        cout << "The no. is " << a << " + " << b << "i" << endl;
    }
};
int calculator ::sumrealcomplex(complex ob1, complex ob2)
{
    return (ob1.a + ob2.a);
}
int calculator ::sumcompcomplex(complex ob1, complex ob2)
{
    return (ob1.b + ob2.b);
}

int main()
{
    complex c1, c2;
    c1.setdata(1, 2);
    c1.printno();

    c2.setdata(4, 5);
    c2.printno();

    calculator c3;
    int resr = c3.sumrealcomplex(c1, c2);
    cout << "The sum of the real parts of the complex no.s are " << resr << endl;

    int resc = c3.sumcompcomplex(c1, c2);
    cout << "The sum of the complex parts of the complex no.s are " << resc << endl;
    return 0;
}