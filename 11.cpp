   #include<iostream> 
   using namespace std; 
// //This will not swap the values bec. actual paras transfer a copy of variables to  
// //formal parameters hence both have different memory locatns 
//  int swap(int a, int b) 
//  { 
//   int temp=a; 
//   a=b; 
//   b=temp; 
//   return(a,b); 
//   //  }                
//    int swapp(int *a, int *b)        // void swapp(int *a, int *b){                                 //  { 
//        int temp=*a;                 //    int temp=*a;                    
//         *a=*b;                      //  *a=*b;
//          *b=temp;                    //  *b=temp; }       
//        return(*a,*b); 
//  } 
//    int main() 
//{   
//   int x=4,y=5; 
//     cout<<"The value of x "<<x<<" and y "<<y<<endl; 
//  // swap(x,y);       this will not swap the values 
//  // cout<<"The value of x "<<x<<" and y "<<y<<endl; 
//     swapp(&x,&y);  
//     cout<<"The value of x "<<x<<" and y "<<y<<endl;  
//    return 0; 
//}
      // int & 
      int swaprefvar(int &a, int &b)
     {
      int temp=a; 
         a=b;
         b=temp;
      // return a;
         return(a,b);
     }
     int main()
     {
      int x=4,y=5;
       cout<<"The value of x "<<x<<" and y "<<y<<endl; 
//     swaprefvar(x,y)=667;                           
//     cout<<"The value of x "<<x<<" and y "<<y<<endl     x=667  y=4   
       swaprefvar(x,y);                           
       cout<<"The value of x "<<x<<" and y "<<y<<endl;   
       return 0;
     }