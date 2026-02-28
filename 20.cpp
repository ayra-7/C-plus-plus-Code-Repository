//***************************Friend functions************************
#include<iostream>
using namespace std;
 class complex
 {
    int a;
    int b;
    //this does not have permission to access the members of this class its just a permission
    friend complex sumcomplex(complex ob1, complex ob2);
   public:
    //friend complex sumcomplex(complex ob1, complex ob2);
    void setdata(int n1, int n2)
    {
        a=n1;
        b=n2;
    }
    void printno()
    {
        cout<<"The no. is "<<a<<" + "<<b<<"i"<<endl;
    }

 };
 complex sumcomplex(complex ob1, complex ob2)
 {
    complex ob3;
    ob3.setdata((ob1.a+ob2.a), (ob1.b+ob2.b));
    return ob3;
 }
int main()
{ 
    complex c1,c2,sum;
    c1.setdata(1,2);
    c1.printno();

    c2.setdata(2,3);
    c2.printno();

    sum=sumcomplex(c1,c2);
    sum.printno();
    return 0;
}