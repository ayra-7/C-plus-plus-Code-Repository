//*************************Binary search Qs*************************

//*************First and Last position of an element****************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[100], num , i, mid,n, start, end, first=-1, last=-1;
//     cout<<"Size of array"<<endl;
//     cin>>n;
//     cout<<"Elemnts of array:"<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"No. you want to search for"<<endl;
//     cin>>num;

//     start=0;
//     end=n-1;

//         while(start<=end)
//     {
//             mid=start + ( end - start )/ 2;
//             if(a[mid]==num)
//             {
//                 first=mid;
//                 end=mid-1;
//             }
//             else if(a[mid]<num)
//                 start=mid+1;

//             else
//                 end=mid-1;
//     }

//     start=0, end=n-1,mid=0;
//     while(start<=end)
//     {

//             mid=start + ( end - start )/ 2;

//             if(a[mid]==num)
//             {
//                 last=mid;
//                 start=mid+1;
//             }
//             else if(a[mid]<num)
//             start=mid+1;

//             else
//             end=mid-1;
//     }
//     cout<<first<<" "<< last;
//     return 0;
// }

 //**********************Find the position***********************
//   #include<iostream>
//   using namespace std;
//   int main()
//   {
//     int a[100],i,  n, num, mid, start, end, index;
//     cout<<"Array size"<<endl;
//     cin>>n;
//     cout<<"Array elements"<<endl;
//     for(i=0; i<n;i++)
//     {
//     cin>>a[i];
//     }
//     cout<<"Element"<<endl;
//     cin>>num;

//     start=0;
//     end=n-1;
//     index=n;

//      while(start<=end)
//     {

//             mid= start+ (end-start)/2; // -> To prevent from overflow
//             if(a[mid]==num)
//             {
//                 index=mid;
//                 break;
//             }
//             else if(a[mid]<num)
//                 start=mid+1;

//             else
//             {
//                 end=mid-1;
//                 index=mid;
//             }
        
//     }
//     cout<<index;
    
//     return 0;
//   }

//********************sqrt(x)*********************
// #include<iostream>
// using namespace std;
// int main()
// {
//      int a[100], i , n, num, start, end,mid,ans;
//      cout<<"Array size"<<endl;
//      cin>>n;
//         n=n+1;
//      cout<<"Number"<<endl;
//      cin>>num;

//      start=0;
//      end=n-1;

//         if (num<2)
//         cout<< num;

//      while(start<=end)
//         {
//             mid = start + (end-start)/2;
//             if(mid==num/mid)
//             {
//                 ans=mid;
//                 break;
//             }
//             else if(mid<num/mid)
//             {
//             ans=mid;
//             start=mid+1;
//             }
//             else
//             {
//             end=mid-1;
//             }
//         }     
//         cout<<ans;
//     return 0;
// }

//********************No. of occurences*********************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[100], num , i, mid,n, start, end, occurence, first=-1, last=-1;
//     cout<<"Size of array"<<endl;
//     cin>>n;
//     cout<<"Elemnts of array:"<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     cout<<"No. you want to search for"<<endl;
//     cin>>num;

//     start=0;
//     end=n-1;

//         while(start<=end)
//     {
//             mid=start + ( end - start )/ 2;
//             if(a[mid]==num)
//             {
//                 first=mid;
//                 end=mid-1;
//             }
//             else if(a[mid]<num)
//                 start=mid+1;

//             else
//                 end=mid-1;
//     }

//     start=0, end=n-1,mid=0;
//     while(start<=end)
//     {

//             mid=start + ( end - start )/ 2;

//             if(a[mid]==num)
//             {
//                 last=mid;
//                 start=mid+1;
//             }
//             else if(a[mid]<num)
//             start=mid+1;

//             else
//             end=mid-1;
//     }
    
//     if(first==-1 && last==-1)
//         occurence=0;
//     else
//     occurence=last-first+1;

//     cout<<"Occurences= "<<occurence;
//     return 0;
// }

//*******************Kth missing positive integer(increasing) **********************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[100], i, n, k, start, end, mid, ans;
//     cout<<"Array size"<<endl;
//      cin>>n;
//      cout<<"Elements"<<endl;
//      for(i=0; i<n; i++)
//      {
//       cin>>a[i];
//      }

//     cout<<"Enter position"<<endl;
//     cin>>k;
     
//      start=0;
//      end=n-1;
//      ans=n;
//     while(start<=end)
//     {mid=start + (end-start)/2;
//         if(a[mid]-mid-1>=k)
//         {
//             ans=mid;
//             end=mid-1;
//         }
//         else
//         start=mid+1;
//     }
//     cout<< ans+k;
//     return 0;
// }

//*********************Cube root(x)*************************
#include<iostream>
using namespace std;
int main()
{
     int a[100], i , n, num, start, end,mid,ans;
     cout<<"Array size"<<endl;
     cin>>n;
        n=n+1;
     cout<<"Number"<<endl;
     cin>>num;

     start=0;
     end=n-1;

        if (num<2)
        cout<< num;

     while(start<=end)
        {
            mid = start + (end-start)/2;
            if(mid==(num/mid)/mid)
            {
                ans=mid;
                break;
            }
            else if(mid<(num/mid)/mid)
            {
            ans=mid;
            start=mid+1;
            }
            else
            {
            end=mid-1;
            }
        }     
        cout<<ans;
    return 0;
}