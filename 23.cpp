//************************************Constructor************************************
#include<iostream>
using namespace std;
class complex
{
    int a;
    int b;
    public:
    complex(void);          //declaration
    void printno()
    {
        cout << "The no. is " << a << " + " << b << "i" << endl;
    }
};
complex :: complex(void)    //definition
{
    a=10;
    b=20;
}
int main()
{
    complex c1, c2, c3;
    c1.printno();
    c2.printno();
    c3.printno();    
    return 0;
}