//********************Pointer to objects and Arrow operator*************
#include<iostream>
using namespace std;
class complex
{
    int real , imaginary;
public:
 void getData()
 {
    cout<<"The real part is "<<real<<endl;
    cout<<"The imaginary part is "<<imaginary<<endl;
 }
 void setData(int a, int b)
 {
    real = a;
    imaginary =b;
 }
};
int  main()
{
    complex c1;
   // complex *ptr = &c1;
    complex *ptr = new complex;
    ptr->setData(30,40); /* arrow operator dereferences the pointer and 
    ptr->getData();        
     runs the cooresponding thing*/
   (*ptr).setData(40,50);
    (*ptr).getData();                      
    
    return 0;
}