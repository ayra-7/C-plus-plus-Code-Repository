//************************* Conversions *******************************

// /* Decimal to binary */
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num, rem, ans=0, mul=1;
//     cout<<"Enter no"<<endl;
//     cin>>num;
//     while(num>0)
//     {
//         rem=num%2; /* or rem=num&1 */
//         num/=2; /* or num>>=1 */
//         ans+=rem*mul; 
//         mul*=10;
//     }
//     cout<<"Binary no.= "<<ans<<endl;
// return 0;
// }


// /* Binary to Decimal */
// #include<iostream>
// using namespace std;
// int main()
// {
//     int num, rem, mul=1,ans=0;
//     cout<<"Enter binary no."<<endl;
//     cin>>num;
//     while(num>0) /* or while(num) -> bec. until no. it considers TRUE a.s.a 0 FALSE */
//     {
//         rem=num%10;
//         ans+=rem*mul;
//         mul*=2;
//         num/=10;
//     }
//     cout<<"Decimal no.= "<<ans<<endl;
    
//     return 0;
// }


/***** Binary to Octal ******/

/* Binary to Decimal */
#include<iostream>
using namespace std;
int main()
{
    int num, rem, mul=1,ans=0;
    cout<<"Enter binary no."<<endl;
    cin>>num;
    while(num>0) /* or while(num) -> bec. until no. it considers TRUE a.s.a 0 FALSE */
    {
        rem=num%10;
        ans+=rem*mul;
        mul*=2;
        num/=10;
    }
  
/* Decimal to Octal */
    num=ans;
    ans=0;
    mul=1;
    while(num>0)
    {
        rem=num%8;
        num/=8; 
        ans+=rem*mul;
        mul*=10;
    }
    cout<<"Octal no.= "<<ans<<endl;
return 0;
}
