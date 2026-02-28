//*************************Two pointers************************ 

// //********************Segregate 0 and 1************************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[50],i,n,start,end;
//     cout<<"Size"<<endl;
//     cin>>n;
//     cout<<"Elements"<<endl;
//     for(i=0;i<n;i++)
//     cin>>a[i];

//     start=0;
//     end=n-1;
//     while(start<=end)
//     {
//         if(a[start]==0)
//         {
//             start++;
//         }
//         else
//         {
//             if(a[end]==0)
//             {
//             swap(a[start],a[end]);
//             start++;
//             end--;
//             }
        
//             else
//             end--;
//         }
        
//     }

//     for(i=0;i<n;i++)
//     cout<<a[i]<<" ";
    
//     return 0;
// }

// //*************************Pair sum(increasing order)******************* 
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int a[50],i,n,start,end,target;
//     cout<<"Size"<<endl;
//     cin>>n;
    
//     vector<int>ans;
//     cout<<"Elements"<<endl;
//     for (i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"Target"<<endl;
//     cin>>target;

//     start=0;
//     end=n-1;
//     while(start<end)
//     {
//         if(a[start]+a[end]==target)
//         {
//            cout<<a[start]<<" "<<a[end];
//             return 0;
//         }
//         else if(a[start]+a[end]>target)
//         end=end-1;
//         else
//         start=start+1;
//     }
//     cout<<"Not found";
    

//     return 0;
// }

//***********************Pair difference(increasing order)********************
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int a[50],i,n,start,end,target;
//     cout<<"Size"<<endl;
//     cin>>n;
    
//     cout<<"Elements"<<endl;
//     for (i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"Target"<<endl;
//     cin>>target;

//     start=0;
//     end=1;
//     if(target<0)
//     target*=-1;

//     while(end<n)
//     {
//         if(a[end]-a[start]==target)
//         {
//            cout<<a[end]<<" "<<a[start];
//             return 0;
//         }
//         else if(a[end]-a[start]>target)
//         start=start+1;
//         else
//         end=end+1;

//         if(start==end)
//         end++;
//     }
//     cout<<"Not found";
    

//     return 0;
//  }

//**********************Pair Product(increasing order)********************** 
#include<iostream>
using namespace std;
int main()
{
    int a[50], i, n, start, end,target;
    cout<<"Size"<<endl;
    cin>>n;
    cout<<"Elements"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"Target"<<endl;
    cin>>target;
    
    start=0;
    end=n-1;
    while(start<end)
    {
        if(a[start]*a[end]==target)
        {
            cout<<a[start]<<" "<<a[end]<<endl;
            return 0;
        }
        else if(a[start]*a[end]>target)
        end--;
        else
        start++;
    }
    cout<<"Not found";
    
    return 0;
}