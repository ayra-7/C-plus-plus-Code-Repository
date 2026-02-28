//*******************Linear Search in array**************************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[5]={2, 5, 10, 14, 26};
//     int num,i;
//     cout<<"Enter the no."<<endl;
//     cin>>num;
//     for(i=0;i<5;i++)
//     {
//         if(num==a[i])
//         {
//             cout<<i;
//             return 0;
//         }
//     }
//     cout<<-1; 
    
//     return 0;
// }

//**************** Reverse an array (extra array)*******************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[5]={2,4,5,6,7},b[5];
//     int i,j=0;
//     for (i=4;i>=0;i--)
//     {
//         b[j]=a[i];
//         j++;
//     }
//     i=0;
//     for(j=0;j<5;j++)
//     {
//         a[i]=b[j];
//         i++;
//     }
//     for(i=0;i<5;i++)
//     {

//     cout<<a[i]<<" ";
//     }
    
//     return 0;
// }

//**************** Reverse an array (extra array)*******************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[4]={2,4,5,6};
//     int i,j=4,temp;
//     for(i=0;i<j;i++)
//     {
//         swap(a[i],a[j]);
//         j--;
//     }
//     for(i=0;i<5;i++)
//     {
//     cout<<a[i]<<" ";
//     }
//     return 0;
// }

//********************Second Max************************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[5]={2,5,6,8,9};
//     int largest=INT32_MIN;
//     int secondl=INT32_MIN;
    
//     //largest element
//     for(int i=0;i<5;i++)
//     {
//         if(a[i]>largest)
//         largest = a[i];
//     }   

//     //second largest
//     for(int i=0;i<5;i++)
//     {
//         if(a[i]!=largest)
//         secondl=max(secondl,a[i]);
//     }   
//     cout<<secondl;
    
//     return 0;
// }

//********************Missing No.*************************  
// #include<iostream>
// using namespace std;
// int main()
// {
//     int sum=0,n,arr[10],i;
//     cout<<"Enter size of array ";
//     cin>>n;
        
//        cout<<"Enter elements of array";
//        for(i=0;i<n;i++)
//        {
//         cin>>arr[i];
//        }
        
//         for(int i=0; i<n-1; i++)
//         {
//             sum+=arr[i];
//         }
        
//         int ans=n*(n+1)/2;
        
//         cout<<"Missing = "<< ans-sum;
    
//     return 0;
// }

//*******************Fibonacci Series*******************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a[100], i, num, s;
//     cout<<"Enter number of fibonacci series"<<endl;
//     cin>>s;
//      a[0]=0;
//      a[1]=1;
//      cout<<a[0]<<"\n"<<a[1]<<endl;

//      for(i=2;i<s;i++)
//      {
//         a[i]=a[i-2]+a[i-1];
//         cout<<a[i]<<endl;
//      }
//      cout<<"Number= "<<a[s-1];
//     return 0;
// }

//******************Rotate array by 1/ Cyclic Rotate ****************************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={1,2,3,4,5};
//         int n=sizeof(arr)/sizeof(arr[0]);
//         int temp=arr[n-1];
//     for(int i=n-1;i>=0;i--)
//     {
//         arr[i]=arr[i-1];
//     }
//     arr[0]=temp;
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//******************Passing array as function arguments*****************
#include<iostream>
using namespace std;

void fun(int a[],int s) //a[]-> *(takes add.)
{
    cout<<sizeof(a)<<endl;
    for(int i=0; i<s;i++)
    {
    cout<<a[i]<<" ";
    }
}

int main()
{
    int arr[5]={3,2,1,6,7};
    cout<<sizeof(arr)<<endl;
    fun(arr,5);
    
    
    return 0;
}
