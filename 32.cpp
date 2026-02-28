//***********************Protected visibility mode******************* 
#include <iostream>
using namespace std;
class base
{
protected:
    int a;

private:
    int b;

public:
    int c;
};

class derived : protected base
{
public:
    int d;
    void show()
    {
        a = 10;
        //  b=20; -> can't be declared bec. private memb. of base class
        c = 30;
        d = 40;

        cout << "The vale of a is " << a << endl;
        //   cout<<"The vale of b is "<<b<<endl;
        cout << "The vale of c is " << c << endl;
        cout << "The vale of d is " << d << endl;
    }
};
int main()
{
    base b;
    derived dr;
    dr.show();

    /* cout<<b.a; -> error bec. protected not accessed outside only inherited
                    (protected -> protected) */
    // cout<<b.b; -> bec. declared private

    cout << b.c << endl; // Garbage value bec. declared in derived class

    // cout<<b.d; -> bec. d not memb. of base class

    // cout<<dr.a; -> error (protected -> protected)
    // cout<<dr.b; -> error
    // cout<<dr.c; -> error (public -> protected)
    cout << dr.d << endl;
    return 0;
}