//*************************Binary search Qs*************************

//****************Peak Index in Mountain(value->peak-> inc. then->dec.)*******************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[100], i, n, start, end, mid;
//     cout<<"Enter size of array"<<endl;
//     cin>>n;
//     cout<<"Enter elements of array"<<endl;
//     for(i=0;i<n;i++)
//     cin>>a[i];

//     start=0;
//     end=n-1;

//     while(start<=end)
//     {
//         mid=end+ (start-end)/2; // -> bec. runtime error bec. it's accessing an outside memory location
//         if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
//         {
//         cout<<"Index= "<<mid;
//         return 0;
//         }

//         else if(a[mid]>a[mid-1])
//         start=mid+1;

//         else
//         end=mid-1;
//     }

    
//     return 0;
// }

//**********Min. element in Rotated Arrray(increasing ord)************** 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[100], i, n, ans, start, end, mid; 
//     cout<<"Enter size of array"<<endl;
//     cin>>n;
//     cout<<"Enter elements of array"<<endl;
//     for(i=0;i<n;i++)
//     cin>>a[i];

//     start=0;
//     end=n-1;
//     ans=a[0];

//     while(start<=end)
//     {
//         mid=end+ (start-end)/2; // -> bec. runtime error bec. it's accessing an outside memory location
//         if(a[mid]>=a[0]) 
//         {
//         start=mid+1;
//         }

//         else 
//         {
//             ans=a[mid];
//             end=mid-1;
//         }

//     }

//  cout<<"Min. element= "<<ans;
    
//     return 0;
// }

//*******************Searching in sorted array(increasing order)*****************
#include<iostream>
using namespace std;
int main()
{
    int a[100], i, n, num, ans, start, end, mid; 
    cout<<"Enter size of array"<<endl;
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Enter no. you want to search for"<<endl;
    cin>>num;

    start=0;
    end=n-1;
    ans=-1;

    while(start<=end)
    {
        mid=end+ (start-end)/2; // -> bec. runtime error bec. it's accessing an outside memory location
        if(a[mid]==num) 
        {
        cout<<mid;
        return 0;
        }

        else if(a[mid]>=a[start])
        {
            if(a[start]<=num && num<=a[mid])
            end=mid-1;

            else
            start=mid+1;
        }

        else
        if(a[mid]<=num && num <=a[end])
        start=mid+1;

        else
        end=mid-1;

    }

 cout<<"element= "<<ans;
    
    return 0;
}
