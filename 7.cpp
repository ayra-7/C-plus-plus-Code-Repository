#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int *b=&a;
    cout<<"The adddress of a is "<<&a<<endl;
    cout<<"The adddress of a(in terms of b) is "<<b<<endl;
    cout<<"The adddress of b is "<<&b<<endl; 
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<*b<<endl;

 //POINTER TO POINTER
    int **c=&b;             
    cout<<"The adddress of b is "<<&b<<endl;
    cout<<"The adddress of b(in terms of c) is "<<c<<endl;
    cout<<"The adddress of c is "<<&c<<endl;
    cout<<"The value of c is "<<&a<<endl;
    cout<<"The value of (value of c) is "<<**c<<endl;
    return 0;
}