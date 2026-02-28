// //*********************************Templates********************************
// #include<iostream>
// using namespace std;
//
// template<class T>
// class vector
// {
//     public:
//   //T arr[3];
//     T *arr;
//   int size;
//   vector(int m)
//   {
//     size = m;
//     arr = new int[size];
//   }
//    T dotproduct(vector &v)
//    {
//     T d = 0;
//     for(int i = 0; i<size; i++)
//     {
//         d+= this->arr[i] * v.arr[i];
//     }
//         return d;
//    }
// };
// int main()
// {
//     vector<int> v1(3);
//     v1.arr[0]=3;
//     v1.arr[1]=1;
//     v1.arr[2]=0;
//
//     vector<int> v2(3);
//     v2.arr[0]=5;
//     v2.arr[1]=6;
//     v2.arr[2]=2;
//
//      int a = v1.dotproduct(v2);
//      cout<<a<<endl;
//      return 0;
// }

// //*********************Class Templtes with Multiple Parameters********************
// #include<iostream>
// using namespace std;
// template <class T1, class T2>
// class myClass
// {
//   public:
//   T1 data1;
//   T2 data2;
//   myClass(T1 a,T2 b)
//   {
//   data1=a;
//   data2=b;
//   }
//   void display()
//   {
//     cout<<this->data1<<endl<<this->data2<<endl ;
//   }
// };
// int main()
// {
//     myClass<char,float>obj('c',2.8);
//     obj.display();
//     return 0;
// }

//*****************Class templates with Default Parameters*******************
#include <iostream>
using namespace std;
template <class T1 = int, class T2 = float, class T3 = char>
class Harry
{
public:
    T1 a;
    T2 b;
    T3 c;
    Harry(T1 a, T2 b, T3 c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    void display()
    {
        cout << "a =" << a << endl;
        cout << "b =" << b << endl;
        cout << "c =" << c << endl;
    }
};
int main()
{
    Harry<> h(4, 4.5, 'c');
    h.display();
    cout << endl;
    Harry<float, char, char> g('B', 'd', 'f');
    g.display();
    return 0;
}