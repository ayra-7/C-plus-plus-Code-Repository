// //*************************function templates**************************
// #include<iostream>
// using namespace std;
// 
// //float funcaverage(int a, int b)
// //{
// //    float avg= (a+b)/2.0;
// //    return avg;
// //}
// //float funcaverage1(int a, float b)
// //{
// //    float avg= (a+b)/2.0;
// //    return avg;
// //}
// 
// template<class T1, class T2>
// float funcaverage(T1 a, T2 b)
// {
//    float avg= (a+b)/2.0;
//    return avg;
// }
// 
// int main()
// {
//    // float a;
//    // a=funcaverage(5,2);
//    // printf("The average is %.3f\n",a);
//    // a=funcaverage1(5,2.4);
//    // printf("The average is %.3f",a);
//     
//     float a;
//     a=funcaverage(5.1,2.444);
//     cout<<"The average is "<<a<<endl;
//    return 0;
// }

//******************Member func templates and overloading template func.s******************
#include<iostream>
using namespace std;

template <class T>
class Harry
{ 
    public:
    T data;
    Harry(T a)
    {
        data = a;
    }
    void display();
};
template<class T>
void Harry<T>:: display()
{
    cout<<data<<endl;
}

void fun(int a) // exactly matching
{
    cout<<"This is func() "<<a<<endl;
}
template<class T>
void fun(T a)  //  matching with the help of template
{
    cout<<"This is templatised func() "<<a<<endl;
}
template<class T>
void fun1(T a)  // gets executed because no exact match present
{
    cout<<"This is templatised func() "<<a<<endl;
}
int main()
{
    // Harry<int>h(5);
    // h.display();
       Harry<char>h('C');
       h.display();
     
        fun(4); // Exactly matching function gets executed -> highest priority
        fun1(4);
    
    return 0;
}     