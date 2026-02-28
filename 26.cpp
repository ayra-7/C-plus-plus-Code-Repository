//***********************Default arguments in constructor**********************
#include<iostream>
using namespace std;
class simple
{
    int data1;
    int data2;
    int data3;
    public:
     simple(int a, int b=8, int c=9)
     {
        data1=a;
        data2=b;
        data3=c;
     }
     void show();
};
void simple :: show()
{
  cout<<"The value of data 1 , data 2 and data 3 is  "<<data1<<" , "<<data2<<" and "<<data3<<endl;
  cout<<sizeof(data1);
}
int main()
{ simple c1(1,6);
c1.show();
    
    
    return 0;
}






























