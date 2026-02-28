//*************************Inheritance syntax and visibility mode****************
#include <iostream>
using namespace std;
// Base class
class employee
{
public:
    int id;
    float salary;
    employee(int impid)
    {
        id = impid;
        salary = 34.0;
        cout << "id " << id << endl;
        cout << "salary " << salary << endl;
    }
    employee() {};
};

// Creating a derived class programmer from employee base class
// derived class
class programmer : public employee   /*private*/
{
public:
    // int languagecode;
    programmer(int imd)
    {
        id = imd;
        salary = 45;
    }
    int languagecode = 9;
    void getdata()
    {
        cout<< endl;
        cout<< id << endl;
    }
};

int main()
{
    employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    programmer skillf(10);
    cout << skillf.languagecode;
    skillf.getdata();
    cout << skillf.salary << endl;
    cout << skillf.id << endl;

    return 0;
}