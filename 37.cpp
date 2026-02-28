//**********************Constructors in derived class************************
#include <iostream>
using namespace std;
class Base1
{
    int data1;

public:
    Base1(int d1)
    {
        data1 = d1;
        cout << "Constructor of Base1 class called " << endl;
    }
    void printdata1()
    {
        cout << "The value of data1: " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int d2)
    {
        data2 = d2;
        cout << "Constructor of Base2 class called " << endl;
    }
    void printdata2()
    {
        cout << "The value of data2: " << data2 << endl;
    }
};

/*
.Case1:
 Class B: public A
 -> order of execution of constructor->A(),B()
.Case2:
 Class B: public B, public C
 -> order of execution of constructor->B(),C(),A()
.Case3:
 Class A: public B, virtual public C
 -> order of execution of construtor->C(),B(),A()
*/

class derived : public Base1, public Base2
{
    int data3, data4;

public:
    derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        data3 = c;
        data4 = d;
        cout << "Constructor of Derived class called " << endl;
    }
    void printdata3_4()
    {
        cout << "The value of data3 and data4: " << data3 << " and " << data4 << endl;
    }
};

int main()
{
    derived obj1(2, 4, 6, 8);
    obj1.printdata1();
    obj1.printdata2();
    obj1.printdata3_4();

    return 0;
}