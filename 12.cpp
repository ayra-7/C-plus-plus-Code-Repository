 #include<iostream>
 using namespace std;
// inline int product(int a, int b)
// {
//    //Not recommended to use static variables in inline functions 
//    // static int c=0;
//    // c=c+1;
//    // return a*b+c;
//       return a*b;
// }

// int main()
// {
//    int x,y;
//    cout<<"Enter the 2 no.s"<<endl;
//    cin>>x>>y;
//    cout<<"The product is "<<product(x,y)<<endl;
//    cout<<"The product is "<<product(x,y)<<endl;
//    cout<<"The product is "<<product(x,y)<<endl;
//    cout<<"The product is "<<product(x,y)<<endl;
//    cout<<"The product is "<<product(x,y)<<endl;
//    cout<<"The product is "<<product(x,y)<<endl;
//    cout<<"The product is "<<product(x,y)<<endl;
//    cout<<"The product is "<<product(x,y)<<endl;
//    cout<<"The product is "<<product(x,y)<<endl; 
//    return 0;
// }
// ************************default parameters/arguments**************************
   float moneyrecieved(float curmoney, float factor=1.04)
   { 
    return curmoney*factor;
   } 
   int main(){
    float money=100000,fact=1.08;
    cout<<" If  cur. bal. "<<money<<" then you will recieve "<<moneyrecieved(money)<<endl;
    cout<<" If cur. bal. "<<money<<" then vip will recieve "<<moneyrecieved(money,fact)<<endl;
    return 0;
   }
