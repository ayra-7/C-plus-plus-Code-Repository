//***************Q1 Convert 'a' to 'A'****************
// #include<iostream>
// using namespace std;

// char convert(char name)
// {
//     char ans = name-'a' +'A';
//     return ans;
// }
// int main()
// {
//     char name;
//     cout<<"Enter character"<<endl;
//     cin>>name;

//     cout<<convert(name);
    
//     return 0;
// }

//********************Q2 Armstrong No.*********************
// #include<iostream>
// #include<cmath>
// using namespace std;

// int CountDigit(int num)
// {
//     int count=0;
//     while(num)
//     {
//         count++;
//         num/=10;
//     }
//         return count;
// }

// bool armstrong(int num, int digit)
// {
//     int rem, ans=0, n=num;
//     while(n>0)
//     {
//         rem=n%10;
//         n/=10;
//         ans=ans+pow(rem,digit);
//      cout<<ans<<" ";
//      }
//      cout<<ans<<" ";
//     if(ans==num)
//     return 1;
//     else
//     return 0;
// }
// int main()
// {
//     int num;
//     cout<<"Enter  num"<<endl;
//     cin>>num;
//     int digit=CountDigit(num);

//     cout<<armstrong(num, digit);
    
//     return 0;
// }

//************************Q3 Find trailing zero in a fact****************************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int N,count=0;
//     cout<<"Enter no."<<endl;
//     cin>>N;
//         while(N>=5)
//     {
//         count+=N/5;
//         N/=5;
//     }
//     cout<<"No. of traing zeroes = "<< count;
    
//     return 0;
// }

//***********************Q4 Rectangle*************************
// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c,d;
//     cout<<"Enter 4 sides of rectangle"<<endl;
//     cin>>a>>b>>c>>d;
//     if(a==b && b==c && c==d)
//     {
//         cout<<"Not a rectangle"<<endl;
//     }
//     else
//     {
//         if((a==b && c==d) || (a==c && b==d) || (a==d) && (b==c))
//         {
//             cout<<"Rectangle"<<endl;
//         }
//         else
//         cout<<"Not a rectangle"<<endl;

//     }
//     return 0;
// }

//*********************Q5 Total moves of Bishop***********************
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main()
// {
//     int count=0,A,B;
//     cout<<"Enter position of Bishop (A,B)"<<endl;
//     cin>>A>>B;

//     count+= min(A-1,B-1);
//     count+= min(A-1,8-B);
//     count+= min(8-A,8-B);
//     count+= min(8-A,B-1);
    

//     cout<<"Total moves = "<<count<<endl;
    
    
//     return 0;
// }

//************************Q6 NIM Game(factor of 4)****************************
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter no."<<endl;
    cin>>num;
    if(num%4==0)
    {
        cout<<"You will lose"<<endl;
    }
    else
    cout<<"You will always win"<<endl;;    
    return 0;
}

