#include<iostream>
using namespace std;
class complex
{
int a,b;
public:
complex(int x,int y)
{
    a=x;
    b=y;
}
complex(int x)
{
    a=x;
    b=0;
}
complex()
{
    a=0;
    b=0;
}

void printno()
{
    cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;

}
};
int main()
{
    complex c1(1,2);
    complex c2(2);
    complex c3;
    c1.printno();
    c2.printno();
    c3.printno();
    return 0;
}
 