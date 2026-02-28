 //**************************This Pointer************************
 #include<iostream>
 using namespace std;
 class A
 {
     int a;
     int b;
     public:
     void setData_a(int a)
     {
         this->a=a; //this is a keyword which is a pointer which points to the object 
     }             //which invokes the memb. function
     void show_a()
     {
         cout<<"Value of a: "<<a<<endl;
     }
     A& setData_b(int b)
     {
         this->b=b;
         return *this;
     }
     void show_b()
     {
         cout<<"Value of b: "<<b<<endl;
     }
 };
 int main()
 {
     A a,b;
     a.setData_a(4);
     a.show_a();
     
     b.setData_b(6).show_b();
 //  --------------
 //       ^^
 //       ||
 //  Acts as an object
     b.show_b();
     
     return 0;
 }

