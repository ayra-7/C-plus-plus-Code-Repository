//*****************************Excersice*********************
#include<iostream>
#include<cmath>
using namespace std;
class simplecalculator
{
    float a;
    float b;
    public:
    void get_data()
    {
        cout<<"Enter two numbers: "<<endl;
        cin>>a>>b;
    }
    void calculation()
    {
        cout<<"Sum: "<<a+b<<endl;
        cout<<"Difference: "<<a-b<<endl;
        cout<<"Product: "<<a*b<<endl;
        cout<<"Quotient: "<<a/b<<endl;
    }
      
};
 class scientificcalculator
 {
   protected:
    float a;
    float b;    
    public:
    void getdata()
    {
        cout<<"Enter two no.s: "<<endl;
        cin>>a>>b;
    }
    void scientificcalculation()
    {
        cout<<"Exponent of b: "<<exp(a)<<endl;
        cout<<"Exponent of b: "<<exp(b)<<endl;
        a=a*3.14/180;
        b=b*3.14/180;
        cout<<"sin of a: "<<sin(a)<<endl;
        cout<<"sin of b: "<<sin(b)<<endl;
        cout<<"cos of a: "<<cos(a)<<endl;
        cout<<"cos of b: "<<cos(b)<<endl;
        cout<<"tan of a: "<<tan(a)<<endl;
        cout<<"tan of b: "<<tan(b)<<endl;
        cout<<"cot of a: "<<1/tan(a)<<endl;
        cout<<"cot of b: "<<1/tan(b)<<endl;
    }
 };
 class hybridcalculator: public simplecalculator, public scientificcalculator
 {
    public:
    void result()
    {
        get_data();
        calculation();
        getdata();
        scientificcalculation();
    }
 };
int main()
{  
    hybridcalculator n;
    n.result();
    
    return 0;
}