#include<iostream>
using namespace std;
int c=45;
 int main() 
{
    //**************bUlt in dta types************8888
  //int a,b,c;
 //\\cout<<"Enter value of a:"<<endl;
 //\\cout<<"Enter value of b:"<<endl;
 //\\cin>>b;cin>>a;
 //\\c=a+b;
 //\\cout<<"The sum is: "<<c<<endl;
 //\\cout<<"The global variable is: "<<c<<endl;
 //\\cout<<"The global variable is: "<<::c<<endl;
 //***********************Float,Double,Long Double Literals**********************
//float d=34.4f;
//long double e=34.4l;
//cout<<"The size of 34.4 is: "<<sizeof(34.4)<<endl;
//cout<<"The size of 34.4 is: "<<sizeof(34.4f)<<endl;
//cout<<"The size of 34.4 is: "<<sizeof(34.4F)<<endl;
//cout<<"The size of 34.4 is: "<<sizeof(34.4L)<<endl;
//cout<<"The size of 34.4 is: "<<sizeof(34.4l)<<endl;
//cout<<"The value of d is: "<<d<<endl<<"The value of e is: "<<e<<endl;
//******************Reference Variables*********************
//  float x=455;
//  float &y=x;
//  cout<<x<<endl;
//  cout<<y<<endl;
//  cout<<&x<<endl;
//  cout<<&y<<endl;
//*********************Typecasting*******************
    int a=45;
    float b=45.46;
    cout<<"a: "<<a<<endl;
    cout<<"a: "<<float(a)<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"b: "<<int(b)<<endl;
       int c=int(b);

       cout<<"The expression is: "<<a+b<<endl;
       cout<<"The expression is: "<<a+int(b)<<endl;
       cout<<"The expression is: "<<float(a)+b<<endl;
    return 0;
} 
