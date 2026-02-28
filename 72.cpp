//***************************Trapping Rain water****************************
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n, i, maxleft=0, maxright=0, water=0,index=0,maxheight,start,end;
//     cout<<"Size"<<endl;
//     cin>>n;
//     vector<int>a(n);
//     cout<<"Elements"<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     maxheight=a[0];
//     for(i=1;i<n;i++)
//     {
//         if(a[i]>maxheight)
//         {
//             maxheight=a[i];
//             index=i;
//         }
//     }
//     for(i=0;i<n;i++)
//     {
//         start=i,end=n-(i+1);
//         if(start<index)
//         {
//         if(maxleft>a[start])
//         water+=maxleft-a[start];
//         else
//         maxleft=a[start];
//         }

//         if(end>index)
//         {
//             if(maxright>a[end])
//         water+=maxright-a[end];
//         else
//         maxright=a[end];
//         }

//     }
//     cout<<water;
//     return 0;
// }

//************************3 SUM*********************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[50],i,j,n,start,end,ans,num;
//     cout<<"Size"<<endl;
//     cin>>n;
//     cout<<"Elements"<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }    

//     cout<<"Number"<<endl;
//     cin>>num;
//     //sorting
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

//     //3 SUM
//     for(i=0;i<n-2;i++)
//     {
//         ans=num-a[i];
//         start=i+1, end=n-1;
//         while(start<end)
//         {
//             if(a[start]+a[end]==ans)
//             {
//                 cout<<a[i]<<" "<<a[start]<<" "<<a[end];
//                 break;
//             }
//             else if(a[start]+a[end]>ans)
//             end--;
//             else
//             start++;
//         }
//     }   
//     if(i>n-2) 
//     cout<<"No. not found"<<endl;
//     return 0;
// }

// //************************4 SUM*********************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[50],i,j,n,start,end,ans,num;
//     cout<<"Size"<<endl;
//     cin>>n;
//     cout<<"Elements"<<endl;
//     for(i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }    

//     cout<<"Number"<<endl;
//     cin>>num;
//     //sorting
//     for(i=0;i<=n-1;i++)
//     {
//         bool swapped= 0;
//         for(j=n-1;j>i;j--)
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

//     //4 SUM
//     for(i=0;i<n-3;i++)
//     {
//         for(j=i+1;j<n-2;j++)
//         {
//         ans=num-a[i]-a[j];
//         start=j+1, end=n-1;
//          while(start<end)
//          {
//              if(a[start]+a[end]==ans)
//              {
//                  cout<<a[i]<<" "<<a[j]<<" "<<a[start]<<" "<<a[end];
                
//                  return 0;
//              }
//              else if(a[start]+a[end]>ans)
//              end--;
//              else
//              start++;
//          }
//         }
//     }   
//     if(i>=n-3) 
//     cout<<"No. not found"<<endl;
//     return 0;
// }