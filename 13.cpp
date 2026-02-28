   #include<iostream>
   using namespace std;
// int factorial(int n)
// { 
//     if (n<2)
//     {return 1;}
//     return n*factorial(n-1);
// }
// // 4!=4*factorial(3)-> not a value and a function therefore will call itself
// // 4!=4*3*factorial(2)
// // 4!=4*3*2*factorial(1)
// // 4!=4*3*2*1 = 24
// int main()
// { int a;
//     cout<<"Enter the no."<<endl;
//     cin>>a;
//     cout<<"Factorial of "<<a<<" is "<<factorial(a)<<endl;
//     return 0;
// }
    int fib(int n)
    {
        if(n<2){
            return 1;
        }
     return fib(n-2)+fib(n-1);
    }
    int main()
    {
        int a,i;
        cout<<"Enter the position of fibnocci series"<<endl;
        cin>>a;
        cout<<"The element at "<<a<<" is "<<fib(a)<<endl;
        cout<<"The series till "<<a<<" is"<<endl;
        for(i=0;i<=a;i++)
        {
        cout<<fib(i)<<endl;

        }
        
        return 0;
    }