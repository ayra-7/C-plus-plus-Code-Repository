//************************* ARRAY INTRO ******************************

//*****************No. of elements in an array******************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[]={3,5,6,8,9,23};
//     cout<<sizeof(a)/sizeof(a[0]);
    
//     return 0;
// }

//*************************Min. and MAx. element in array******************* 
#include<iostream>
using namespace std;
int main()
{
    int a[5]={5,4,6,2,3};
    int min=INT32_MAX; //min.
    for(int i=0; i<5; i++ )
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<"Min. element in this array: "<<min<<endl;

    int max=INT32_MIN; //max.
    for(int i=0; i<5; i++ )
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    
    cout<<"Max. element in this array: "<<max<<endl;
  
    
    return 0;
}