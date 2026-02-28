//********************Insertion sort********************
#include<iostream>
using namespace std;
int main()
{
    int arr[100],n,i,j;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter elements of array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=n-2; i>=0;i--)
    {
        for(j=i;j<n;j++)
        {
            if(arr[j+1]<arr[j])
            swap(arr[j],arr[j+1]);

            else
            break;
        }

    }
    for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }    
    return 0;
}