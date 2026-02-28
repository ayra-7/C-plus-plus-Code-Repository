#include<iostream>
using namespace std;
 //int sum(int a, int b)
 //{
 //   int c=a+b;
 //   return c;
 //}

 // int sum(int a, int b);  ->   acceptable
 // int sum(int a, b);      ->   not acceptable
    int sum(int, int);      //   acceptable
 int main()
{
    int num1, num2;
    cout<<"Enter first no."<<endl;
    cin>>num1;
    cout<<"Enter second no."<<endl;
    cin>>num2;
    cout<<"The sum is "<<sum(num1,num2)<<endl; // Actual parameters
    return 0;
}
 int sum(int a, int b)  // Formal parameters
 {
    int c=a+b;
    return c;
 }
