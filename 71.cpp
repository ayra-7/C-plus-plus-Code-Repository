//*****************Prefix Sum****************
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int i,n;
//     cout<<"Size"<<endl;;
//     cin>>n;
//     vector<int>a(n),prefix(n);
//     cout<<"Elements"<<endl;
//     for(i=0;i<n;i++)
//     cin>>a[i];
//     prefix[0]=a[0];
//     for(i=1;i<n;i++)
//     {
//         prefix[i]=prefix[i-1]+a[i];
//     }
//     for(i=0;i<n;i++)
//     cout<<prefix[i]<<" ";

//     return 0;
// }

//*****************Suffix Sum****************
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int i,n;
//     cout<<"Size"<<endl;;
//     cin>>n;
//     vector<int>a(n),suffix(n);
//     cout<<"Elements"<<endl;
//     for(i=0;i<n;i++)
//     cin>>a[i];
//     suffix[n-1]=a[n-1];
//     for(i=n-2;i>=0;i--)
//     {
//         suffix[i]=suffix[i+1]+a[i];
//     }
//     for(i=0;i<n;i++)
//     cout<<suffix[i]<<" ";

//     return 0;
// }

//******************Array into 2 equal sum subarray****************** 
// #include<iostream>
// #include<vector>
// using namespace std;

// bool divide(vector<int> &arr)
// {
//     int prefix=0,total_sum=0,n=arr.size();

//     for(int i=0;i<n;i++)
//     total_sum+=arr[i];

//     for(int i=0;i<n-1;i++)
//     {
//         prefix+=arr[i];
//         if(total_sum==2*prefix)
//         return 1;
//     }
//     return 0;

// }
// int main()
// {
//     int n;
//     cout<<"Size"<<endl;
//     cin>>n;
//     vector<int>v(n);
//     cout<<"Elements"<<endl;
//     for(int i=i=0; i<n;i++)
//     cin>>v[i];

//     cout<<divide(v);
    
    
//     return 0;
// }

//************Largest Sum  Contiguous Subarray(Kadane's Algorithm)***************
// #include<iostream>
// #include<vector>
// using namespace std;

// int Max(vector<int> &a)
// {
//     int Maxi, i, prefix=0,n=a.size();
//     Maxi=INT16_MIN;
//     for(i=0;i<n;i++)
//     {
//         prefix+=a[i];
//         Maxi=max(Maxi,prefix);
//         if(prefix<0)
//         prefix=0;
//     }
//     return Maxi;
// }
// int main()
// {
//     int n,i;
//     cout<<"Size"<<endl;
//     cin>>n;
//     vector<int>v(n);
//     cout<<"Elements"<<endl;
//     for(i=0;i<n;i++)
//     cin>>v[i];

//     cout<<Max(v);
    
//     return 0;
// }

//****************Max Difference between 2 elements***************
#include<iostream>
using namespace std;
int main()
{
    int a[50],i,n,ans,suffix,l;
    cout<<"Size"<<endl;
    cin>>n;
    cout<<"Elements"<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];

    ans=INT16_MIN;
    suffix=a[n-1];
    for(i=n-2;i>=0;i--)
    {
        suffix=max(suffix,a[i]);
    }
    for(i=0;a[i]<suffix;i++)
    {
        ans=max(ans,suffix-a[i]);

    }
    cout<<ans;
    
    return 0;
}
