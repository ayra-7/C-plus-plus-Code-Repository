//*********************Bubble sort******************
#include<iostream>
using namespace std;
int main()
{
    int n,a[100];
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter elements of array:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<=n-1;i++)
    {
        bool swapped= 0;
        for(int j=n-1;j>i;j--)
        {
            if(a[j]<a[j-1])
            {
            swap(a[j],a[j-1]);
            swapped=1;
            }
        }
        if(swapped ==0)
        break;
    }
    for(int i=0; i<n;i++)
    cout<<a[i]<<" ";
    
    return 0;
}