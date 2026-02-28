//******************Bianry Search (for array sorted in desc. order) ******************
#include<iostream>
using namespace std;
int main()
{
    int a[100], n, i, mid, start, end, num, j;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter elemengts of array:"<<endl;
    for(i=0;i<n;i++)
    {cin>>a[i];
    }


    start=0;
    end=n-1;

    cout<<"\nEnter no. you want to search for:"<<endl;
    cin>>num;

    while(start<=end)
    {
            mid= (start+ (end-start)/2); // -> To prevent from overflow
            if(a[mid]==num)
            {
                cout<<mid<<endl;
                return 0;
            }
            else if(a[mid]>num)
                start=mid+1;

            else
                end=mid-1;
    }
    cout<<"No. not found";
    return 0;
}