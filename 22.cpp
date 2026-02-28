//******************************Simple friends example*************************
// #include<iostream>
// using namespace std;
// class Y;
// class X
//{
// int data;
//  public:
//   void set(int value)
//   {
//     data=value;
//   }
//   friend  void add(X,Y);
// };
//
//  class Y
//  {
//     int data;
//     public:
//     void set(int value)
//     {
//         data=value;
//     }
//   friend void add(X,Y);
//
//  };
//
//   void add(X ob1,Y ob2)
//   {
//     cout<<"The sum is "<<ob1.data+ob2.data<<endl;
//   }
// int main()
//{ X c1;
// c1.set(23);
//
// Y c2;
// c2.set(56);
//
// add(c1,c2);
// return 0;
// }

//******************************Complex friends example*************************
#include <iostream>
using namespace std;
class num2;
class num1
{
    int a;

public:
    void set(int n1)
    {
        a = n1;
    }
    friend void swap(num1 &, num2 &);
    friend void display(num1, num2);
};
class num2
{
    int a;

public:
    void set(int n2)
    {
        a = n2;
    }
    friend void swap(num1 &, num2 &);
    friend void display(num1, num2);
};
void swap(num1 &ob1, num2 &ob2)
{
    int temp;
    temp = ob1.a;
    ob1.a = ob2.a;
    ob2.a = temp;
}
void display(num1 ob1, num2 ob2)
{
    cout << "The no.s are " << ob1.a << " and " << ob2.a << endl;
}
int main()
{
    num1 c1;
    c1.set(62);

    num2 c2;
    c2.set(87);

    display(c1, c2);
    swap(c1, c2);
    display(c1, c2);

    return 0;
}
