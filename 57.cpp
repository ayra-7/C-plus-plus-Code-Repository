//*************************Swapping 2 no.s without third var.***********************
// #include<iostream>
// using namespace std;
// void swap(int &a, int &b)
// {    
//        if(-10000<=a,b<=100000 )
// {        a=a+b;
//         b=a-b;
//         a=a-b;
// }
//         else
//        return ;

// }

// int incr(int x)
// {
//     ++x;
// }
// int main()
// { int a=100,b=7;

// swap(a,b);
// cout<<a<<" "<<b<<endl;
// cout<<incr(b);
    
    
//     return 0;
// }

//*************************Swapping of 4 no.s********************
// #include<iostream>
// using namespace std;

// void swap(int &a, int &b, int &c, int &d)
// {
//     int x;
//     x=a;
//     a=b;
//     b=c;
//     c=d;
//     d=x;
// }
// int main()
// {
//     int p=4,q=3,r=2,t=1;
//     swap(p,q,r,t);
//     cout<<p<<" "<<q<<" "<<r<<" "<<t<<endl;
    
//     return 0;
// }

//*****************************nCr(combination)***************************
#include<iostream>
using namespace std;

int fact(int a)
{
    int i,fact=1;
    for(i=1;i<=a;i++)
    {
        fact*=i;
    }
    return fact;
}

int main()
{ 
    int n=6,r=4;
   
    int c=fact(n)/(fact(r)*(fact(n-r)));
    cout<<c;
    
    
    return 0;
}