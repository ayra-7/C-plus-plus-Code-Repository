//*********************************Pointer to derived classes*************************
#include<iostream>
using namespace std;
class Base
{
public:
int var_b;
void show()
{
    cout<<"Displaying base class variable var_b: "<<var_b<<endl;
}

};
class Derived : public Base
{
public:
int var_d;
void show()
{
    cout<<"Displaying base class variable var_b: "<<var_b<<endl;
    cout<<"Displaying derived class variable var_d: "<<var_d<<endl;
}
};
int main()
{
    Base *base;
    Base obj_b;    
    Derived obj_d;
    
    base = &obj_d; // pointer of base class pointing to derived class but will bind late
    base->var_b=4;
//  base->var_d=44; --> error as pointer of base class can ony access memb.s of base class
    base->show();

    Derived *derived;
    derived = &obj_d;
    derived->var_b=5;
    derived->var_d=55;
    derived->show();

    return 0;
}

