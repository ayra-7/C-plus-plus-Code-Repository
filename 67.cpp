//**********************************Binary Search Problems*****************************

//***************************Book Allocation************************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[100],ans;  //a[4]={12.34,67,90};
//     int i, n, start=0,end=0,mid,page,count,M; //M=2;

//     cout<<"Enter size of array"<<endl;
//     cin>>n;

//     cout<<"Elements"<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }

//     cout<<"No. of students"<<endl;
//     cin>>M;

//     if(M>n)
//     cout<<"Allocation not possible";

//     for(i=0;i<n;i++)
//     {
//         start=max(start,a[i]);
//         end=end+a[i];
//     }
//     while(start<=end)
//     {
//         mid=start+(end-start)/2;
//         page=0;count=1;
//         for(i=0;i<n;i++)
//         {
//             page+=a[i];
//             if(page>mid)
//             {
//                 count++;
//                 page=a[i];
//             }
//         }

//         if(count<=M)
//         {
//             ans=mid;
//             end=mid-1;
//         }
//         else
//         start=mid+1;
        
//     }
//     cout<<ans;

//     return 0;
// }

//***********************Painter Partition************************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[100],ans;  //a[5]={12.34,67,90};
//     int i, n, start=0,end=0,mid,wall_length,count,M; //M=3;

//     cout<<"Enter size of array"<<endl;
//     cin>>n;

//     cout<<"Elements"<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }

//     cout<<"No. of painters"<<endl;
//     cin>>M;

//     for(i=0;i<n;i++)
//     {
//         start=max(start,a[i]);
//         end=end+a[i];
//     }
//     while(start<=end)
//     {
//         mid=start+(end-start)/2;
//         wall_length=0;count=1;
//         for(i=0;i<n;i++)
//         {
//             wall_length+=a[i];
//             if(wall_length>mid)
//             {
//                 count++;
//                 wall_length=a[i];
//             }
//         }

//         if(count<=M)
//         {
//             ans=mid;
//             end=mid-1;
//         }
//         else
//         start=mid+1;
        
//     }
//     cout<<ans;

//     return 0;
// }

//***********************Ship packages************************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[100],ans;  //a[6]={3,2,2,4,1,4};
//     int i, n, start=0,end=0,mid,packages,count,M; //M=3;

//     cout<<"Enter size of array"<<endl;
//     cin>>n;

//     cout<<"Elements"<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }

//     cout<<"No. of days"<<endl;
//     cin>>M;

//     for(i=0;i<n;i++)
//     {
//         start=max(start,a[i]);
//         end=end+a[i];
//     }
//     while(start<=end)
//     {
//         mid=start+(end-start)/2;
//         packages=0;count=1;
//         for(i=0;i<n;i++)
//         {
//             packages+=a[i];
//             if(packages>mid)
//             {
//                 count++;
//                 packages=a[i];
//             }
//         }

//         if(count<=M)
//         {
//             ans=mid;
//             end=mid-1;
//         }
//         else
//         start=mid+1;
        
//     }
//     cout<<ans;

//     return 0;
// }

//**********Split array into sub arrays such that min. possible sum**************
#include<iostream>
using namespace std;
int main()
{
    int a[100],ans;  //a[6]={3,2,2,4,1,4};
    int i, n, start=0,end=0,mid,num,count,M; //M=3;

    cout<<"Enter size of array"<<endl;
    cin>>n;

    cout<<"Elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"No. of subarrays"<<endl;
    cin>>M;

    for(i=0;i<n;i++)
    {
        start=max(start,a[i]);
        end=end+a[i];
    }
    while(start<=end)
    {
        mid=start+(end-start)/2;
        num=0;count=1;
        for(i=0;i<n;i++)
        {
            num+=a[i];
            if(num>mid)
            {
                count++;
                num=a[i];
            }
        }

        if(count<=M)
        {
            ans=mid;
            end=mid-1;
        }
        else
        start=mid+1;
        
    }
    cout<<ans;

    return 0;
}