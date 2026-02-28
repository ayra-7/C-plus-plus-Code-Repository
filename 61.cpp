//*******************Selection Sort***************** 

// //**************No. array**************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[6]={10,4,1,3,2,7};
//     for (int i=5;i>0;i--)
//     {
//         int index =i;
//         for(int j=i-1;j>=0;j--)
//         {
//             if(a[j]>a[index])
//             index=j;
//         }
//     swap(a[i],a[index]);
//     }
    
//     for(int i=0;i<6;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

//*****************Char array******************
#include<iostream>
using namespace std;
int main()
{
    char a[6]={'d','h','b','c','k','a'};

    for (int i=5;i>0;i--)
    {
          int index =i;
        for(int j=i-1;j>=0;j--)
        {
            if(a[j]>a[index])
            index=j;
        }
    swap(a[i],a[index]);
    }
    
    for(int i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}