// //*********************Array of objects*******************
//  #include<iostream>
//  using namespace std;
//   class Employee
//   {
//       int Id; 
//       int salary;
//      public:
//      void setdata()
//      {
//          salary = 122;
//          cout<<"Enter the Id of employee"<<endl;
//          cin>>Id;
//      }
//      void getId()
//      {
//          cout<<"The Id of Employee is "<<Id<<endl<<endl;
//      }
//   };
//  int main()
//  {
//      Employee AK[3];
//      //AK[0].setdata
//      for(int i=0; i<3;i++)
//      { cout<<"no."<<i+1<<endl;
//          AK[i].setdata();
//          AK[i].getId();
//      }
//      return 0;
//  }
 
 //***************************Passing of objs as args of func************************* 
 #include<iostream>
 using namespace std;
  class complex
  {
     int a;
     int b;
    public:
     void setdata(int v1, int v2)
     {
        a=v1;
        b=v2;
     }
     void sumofcomplexes(complex ob1, complex ob2)
     {
        a=ob1.a+ob2.a;
        b=ob1.b+ob2.b;
     }
     void printdata()
        {
            cout<<"The complex no. is "<<a<<"+"<<b<<"i"<<endl;
        }
  };
  int main()
 {
    complex c1,c2,c3;
    c1.setdata(1,2);
    c1.printdata();

    c2.setdata(2,5);
    c2.printdata();

    c3.sumofcomplexes(c1,c2);
    c3.printdata();
     return 0;
 }