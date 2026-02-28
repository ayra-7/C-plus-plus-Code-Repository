//**********************************Binary Search Problems*****************************

//*************************Aggressive Cows********************** 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[100], i, j, n, cows, start, end, mid, ans=0, count, pos;
//     cout<<"Size of array"<<endl;
//     cin>>n;
//     cout<<"Elements"<<endl;
//     for(i=0;i<n;i++)
//     {cin>>a[i];}
    
//     cout<<"No. of cows"<<endl;
//     cin>>cows;
    
//     //Sorting Array
//     for(int i=0;i<=n-1;i++)
//     {
//         bool swapped= 0;
//         for(int j=n-1;j>i;j--)
//         {
//             if(a[j]<a[j-1])
//             {
//             swap(a[j],a[j-1]);
//             swapped=1;
//             }
//         }
//         if(swapped ==0)
//         break;
//     }
    
//     //Positioning
//     start=1; //->min. dist. needed
//     end=a[n-1]-a[0]; //->max. the dist. can can go

//     while(start<=end)
//     {
//         mid= start+(end-start)/2;
//         count=1; pos=a[0];
//         for(i=0;i<n;i++)
//         {
//             if(pos+mid<=a[i])
//           {
//             count++;
//             pos=a[i];
//           }  
        
//         }

//         if(count<cows)
//         end=mid-1;

//         else
//         {
//             ans=mid;
//             start=mid+1;
//         }
//     }

//     cout<<ans;
//         return 0;
// }

//*************************Magnetic force between two balls********************** 
#include<iostream>
using namespace std;
int main()
{
    int a[100], i, j, n, balls, start, end, mid, ans=0, count, pos;
    cout<<"Size of array"<<endl;
    cin>>n;
    cout<<"Elements"<<endl;
    for(i=0;i<n;i++)
    {cin>>a[i];}
    
    cout<<"No. of ball"<<endl;
    cin>>balls;
    
    //Sorting Array
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
    
    //Positioning
    start=1; //-> min. force applied
    end=a[n-1]-a[0]; //->max. force that can be applied

    while(start<=end)
    {
        mid= start+(end-start)/2;
        count=1; pos=a[0];
        for(i=0;i<n;i++)
        {
            if(pos+mid<=a[i])
          {
            count++;
            pos=a[i];
          }  
        
        }

        if(count<balls)
        end=mid-1;

        else
        {
            ans=mid;
            start=mid+1;
        }
    }

    cout<<ans;
        return 0;
}

//***************************Koko Eating Bananas*********************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[100], i, n, hr, start=0, end, mid, ans,;
//     long long sum=0;
//     cout<<"Sizeof array"<<endl;
//     cin>>n;
//     cout<<"Elements"<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"Total time taken"<<endl;
//     cin>>hr;

//     for(i=0;i<n;i++)
//     {
//     sum=sum+a[i];
//     end=max(end,a[i]);
//     }
//     start=sum/hr;

//     if(!start)
//     start=1;

//     while(start<=end)
//     {
//         mid=start+(end-start)/2;
//         sum=0;
//         for(i=0;i<n;i++)
//         {
//             sum+=a[i]/mid;
//             if(a[i]%mid)
//             sum++;
//         }

//         if(sum<=hr)
//         {
//             end = mid-1;
//             ans=mid;
//         }

//         else
//         {
//         start=mid+1;
//         }
//     }
//         cout<<ans;
    
//     return 0;
// }