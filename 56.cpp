//**************************Let Code and GfG Qs**************** */

//**********************Q1 Sum of digits till single digit******************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, r,ans=n;
//     cout<<"Enter a no."<<endl;
//     cin>>n;
//     while(ans>=9)
//     {
//         ans=0;
//         while(n>0)
//         {
//             r=n%10;
//             ans+=r;
//             n/=10;
//         }
//         n=ans;
//     }
//     cout<<ans;
//     return 0;
// }

//*******************Q2 Leap Year**********************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int y;
//     cout<<"Enter the year"<<endl;
//     cin>>y;
//     if(y%400==0)
//     {
//         cout<<"Leap Year";
//     }
//     else if(y%4==0 && y%100!=0)
//     {
//         cout<<"Leap Year";

//     }
//     else
//     {
//         cout<<"Not a Leap Year";
//     }
    
//     return 0;
// }

//*********************Q3 Reverse Integer*****************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int x, r, rev=0;
//     cout<<"Enter the no."<<endl;
//     cin>>x;
//     while(x)
//     {
//         r=x%10;
//         if(rev>INT16_MAX/10 || rev<INT16_MIN/10)
//         return 0;
//         rev=rev*10+r;
//         x/=10;
//     }
//     cout<<rev;
    
    
//     return 0;
// }

//***********************Q4 Power of 2***********************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter no"<<endl;
//     cin>>n;
//     while(n!=1)
//     {
//         if(n%2==1)
//         {
//             cout<<"Not a power of 2";
//         return 0;
//         }
//         else
//         n/=2;
//     }
//         cout<<"Power of 2 ";
//     return 0;
// }

//********************Q5 SQRT of x******************************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,mul,i=0;
//     cout<<"Enter no."<<endl;
//     cin>>n;
//     if(n>=0)
//     {
//     while(i*i<=n)
//     {
//         i++;
//     }    
//     cout<<i-1;
//     }
//     return 0;
// }

//*********************Q6 Complement for Base 10 integer**************************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,r,m=1,ans=0;
//     cout<<"Enter no."<<endl;
//     cin>>n;

//     if(n==0)
//     cout<<"Complement is= "<<1;
//     return 0;

//     while(n)
//     {
//         r=n%2;
//         r=r^1;
//         ans+=r*m;
//         m*=2;
//         n/=2;
//     }
//     cout<<"Compliment is= "<<ans;
    
//     return 0;
// } 

//*********************Q7 Ugly number*********************
#include<iostream>
using namespace std;
int main()
{
    
    
    return 0;
}
