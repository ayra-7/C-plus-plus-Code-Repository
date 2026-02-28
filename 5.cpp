//
//#include<iostream>
//using namespace std;
//int main()
//{
//int a,i, fact=1;
//cout<<"Enter the no."<<endl;
//cin>>a;
//for(i=1;i<=a;i++)
//{
//    fact=fact*i;
//}
//cout<<"Factorial of "<<a <<" is " <<fact;
//
//return 0;
//}
#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter the 3 integers";
cin>>a>>b>>c;
if((a>b)&&(a<c)||(a<b)&&(a>c))
{
cout<<a<<" is the middle no.";
}
else if((b<a)&&(b>c)||(b>a)&&(b<c))
{
    cout<<b<<" is the middle no.";
}
else{ 
    cout<<c<<" is the middle no.";
}
    return 0;
}

