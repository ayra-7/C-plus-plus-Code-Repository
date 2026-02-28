//************************Static members and functions************************
#include<iostream>
using namespace std;
class Employee
{
       int id;
       static int count; //  Default initialisation 0
    public:
        void setdata()
        {
            cout<<"Enter the id"<<endl;
            cin>>id;
            count++;
        }
        void getdata(){
            cout<<"The id of employee is "<<id<<endl;
        } 
        static void getcount()
        {
         cout<<"This is employee no. "<<count<<endl;
         // cout<<id; -> Cannot be used as static funcs only access static memb
        }  
};
int Employee :: count/*=1000*/;
int main()
{ 
    Employee Harry, Rohan, Lovish;
    Harry.setdata();
    Harry.getdata();
    //Harry.getcount();
    Employee :: getcount();    

    Rohan.setdata();
    Rohan.getdata();
    //Rohan.getcount();
    Employee :: getcount();    
     
    Lovish.setdata();
    Lovish.getdata();
    //Lovish.getcount();
    Employee :: getcount();    

    return 0;
}