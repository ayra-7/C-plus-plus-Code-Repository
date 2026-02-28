//************************** Multiple inheritance************************
#include <iostream>
using namespace std;
class Base1
{
    protected:
    int n1;
    public:
    void set1(int a)
    {
        n1=a;
    }
};
class Base2
{
    protected:
    int n2;
    public:
    void set2(int b)
    {
        n2=b;
    }
};
class Base3
{
    protected:
    int n3;
    public:
    void set3(int c)
    {
        n3=c;
    }
};

/* Syntax: class derived-class : visibility-mode base_class1, visibility-mode base_class2
{
};
*/

class derived : public Base1, public Base2, public Base3
{
    public:
    void show()
    {
        cout<<"The value of num 1 is "<<n1<<endl;
        cout<<"The value of num 2 is "<<n2<<endl;
        cout<<"The value of num 3 is "<<n3<<endl;
        cout<<"The sum of values is "<<n1+n2+n3<<endl;

    }
};
int main() {
  derived number;
  number.set1(20);
  number.set2(30);
  number.set3(10);
  number.show();
  return 0;
}