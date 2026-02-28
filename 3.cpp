#include<iostream>
using namespace std;
  int main()
{ 
    //******************************if-else control structure***********************
  //int age;
  //cout<<"Tell me your age:"<<endl;
  //cin>>age;
  //if(age<18)
  //{
  //    cout<<"you are not allowed to come at my party: ";
  //}
  // else if(age==18)
  // {cout<<"You are a kid";}
  //  else
  // { cout<<"You can come to my party";}
 ///***************************switch-case statement********************
   int age;
  cout<<"Tell me your age:"<<endl;
  cin>>age;
   switch(age)
  {
  case 18:
    cout<<"You are 18";
    break;
case 2:
    cout<<"You are 2";
    break;
  case 22:
     cout<<"You are 22";  
     break;
  default:
   cout<<"No special case";
    

  }
   return 0;

} 
