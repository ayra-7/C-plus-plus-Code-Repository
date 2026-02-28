#include <iostream>
using namespace std;
class A
{
    int a;
    int b;

public:
    A(int x, int y) : a(x), b(y)
    // A(int x, int y):a(x) , b(x+y)
    // A(int x, int y):a(x) , b(2*y)
    // A(int x, int y):a(x) , b(a+y)
    // A(int x, int y):b(y),a(x)
    // A(int x, int y):b(y) , a(x+b)    ---> Garbage { Bec. a is declared first so it will
    // A(int x, int y):a(y+b),b(y)      ---> Value    initialise first }
    // A(int x, int y)//:a(x)
    { // a=x+b;
      // b=y;
        cout << "constructor called" << endl;
    }
    void print()
    {
        cout << "The value of a: " << a << endl
             << "The value of b: " << b << endl;
    }
};
int main()
{
    A num1(20, 40);
    num1.print();
    return 0;
}