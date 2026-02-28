//**********************Nesting of member functions************************** 
#include<iostream>
#include<string>
using namespace std;
 class binary
 {
   private:  
       string s;
       void chk_bin();
   public:
       void read();
   //  void chk_bin();
       void ones_c();
       void display();
 };

 void binary :: read()
 {
   cout<<"Enter a binary number"<<endl;
   cin>>s;
 }

 void binary :: chk_bin()
 {
   for(int i=0; i < s.length(); i++)
 {
   if(s.at(i)!='0' && s.at(i)!='1')
   {
      cout<<"Not a binary no."<<endl;
      exit(0);
   }
 }
 }

 void binary :: display()
 { chk_bin();
   cout<<"Your binary no."<<endl;
   for(int i=0;i < s.length();i++)
   {
      cout<<s.at(i);
   }
   cout<<endl;
 }

 void binary :: ones_c()
{
   cout<<"One's complement"<<endl;
 {
   for(int i=0;i<s.length();i++)
   {
      if(s.at(i)=='0')
      {
         s.at(i)='1';
      }
      else{
         s.at(i)='0';
      }
    cout<<s.at(i);
   }
   cout<<endl;
 } } 

 int main()
 {
    binary b;
    b.read();
 // b.chk_bin();
    b.display();
    b.ones_c();
    return 0;
 } 