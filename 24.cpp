//***********************************Parameterized constructor*********************************
//#include<iostream>
//using namespace std;
//class complex
//{
//    int a;
//    int b;
//    public:
//    complex(int,int);          //declaration
//    void printno()
//    {
//        cout << "The no. is " << a << " + " << b << "i" << endl;
//    }
//};
//complex :: complex(int x,int y)    //definition 
//{
//    a=x;
//    b=y;
//}
//int main()
//{
//    //Implicit call
//    complex c1(4,7);
//    c1.printno();
//    //Explicit call
//    complex c2 = complex(4,7);
//    c2.printno();
//    return 0;
//}
//***************************************************************************************

//#include<iostream>
//using namespace std;
//class points
//{
//    int a1;
//    int b1;
//    public:
//   points(int x, int y)
//    {
//        a1=x;
//        b1=y;
//    }
//    void display()
//        {
//            cout<<"The point is ("<<a1<<","<<b1<<")"<<endl;
//        }
//    
//};
//int main()
//{
//  points p(1,0);
//    p.display();
//    points q(70,0);
//    q.display();
//    return 0;
//}
//***********************************************************************************************

//#include<iostream>
//#include<math.h>
//using namespace std;
//class point;
//class points
//{
//    int a1;
//    int b1;
//    friend void distance(points, point);
//    public:
//   points(int x, int y)
//    {
//        a1=x;
//        b1=y;
//    }
//    void display()
//        {
//            cout<<"The point is ("<<a1<<","<<b1<<")"<<endl;
//        }
//    
//};
//class point
//{
//    int a2;
//    int b2;
//    public:
//   point(int x, int y)
//    {
//        a2=x;
//        b2=y;
//    } 
//    friend void distance(points, point);
//    
//    void display()
//        {
//            cout<<"The point is ("<<a2<<","<<b2<<")"<<endl;
//        }
//};
//    void distance(points ob1, point ob2)
//    {
//        int s = sqrt((ob2.a2-ob1.a1)*(ob2.a2-ob1.a1)+  (ob2.b2-ob1.b1)*(ob2.b2-ob1.b1));
//        cout<<"The difference between these two points is "<<dis<<endl;
//    }
//
//int main()
//{
//    points p(1,0);
//    p.display();
//    point q(70,0);
//    q.display();
//    distance(p,q);
//    
//    
//    return 0;
//}
#include<iostream>
#include<math.h>
using namespace std;
class points
{
    int a1;
    int b1;
    friend points distance(points ob1, points ob2);
    public:
   points(int x, int y)
    {
        a1=x;
        b1=y;
    }
    void display()
        {
            cout<<"The point is ("<<a1<<","<<b1<<")"<<endl;
        }
    
};
    points distance(points ob1, points ob2)
    {
        int s = sqrt((ob2.a1-ob1.a1)*(ob2.a1-ob1.a1)+  (ob2.b1-ob1.b1)*(ob2.b1-ob1.b1));
        cout<<"The difference between these two points is "<<s<<endl;
    }

int main()
{
    points p(72,81);
    p.display();
    points q(89,7060);
    q.display();
    distance(p,q);
    
    
    return 0;
}