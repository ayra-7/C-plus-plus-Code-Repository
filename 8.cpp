#include<iostream>
using namespace std;
int main()
{
  int i=0,a[]={23,46,56,78};
  do
  {
    cout<<"The value of "<<i<<" is "<<a[i]<<endl;
    i++;
  }while(i<4);
  cout<<a<<endl;
  cout<<&a[2]<<endl;
   int *p=a;    
   for(i=0;i<4;i++){
  cout<<"The value of a["<<i<<"] is "<<*(p+i)<<endl;
   }
   cout<<"address "<<p<<endl;
      for(i=0;i<4;i++){
  cout<<"The address of a["<<i<<"] is "<<(p+i)<<endl;
      }
      
  //cout<<"The value of a[0] is "<<*p<<endl;
  //cout<<"The value of a[1] is "<<*(p+1)<<endl;
  //cout<<"The value of a[2] is "<<*(p+2)<<endl;
  //cout<<"The value of a[3] is "<<*(p+3)<<endl;
    return 0;
}