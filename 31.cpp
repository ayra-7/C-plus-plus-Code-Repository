//*****************************Single inheritance*************************
#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
class derived : /*public*/ private base
{
public:
    int data3;
    void process();
    void display();
};

void base::setdata()
{
    data1 = 10;
    data2 = 20;
}
int base ::getdata1()
{
    return data1;
}
int base ::getdata2()
{
    return data2;
}
void derived ::process()
{
    setdata();
    data3 = data2 * getdata1();
}
void derived ::display()
{
    cout << "The value of data 1 is " << getdata1() << endl;
    cout << "The value of data 2 is " << data2 << endl;
    cout << "The value of data 3 is " << data3 << endl;
}
int main()
{
    derived der;
    /* der.setdata();   -> since visibility mode is private setdata becomes private member of
                           derived and hence cn't be called here but can be called in the public
                           func. of derived class */
    der.process();
    der.display();

    return 0;
}