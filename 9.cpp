#include<iostream>
    typedef struct employee
    {
        int ID;
        char name;
        float salary;
    }ep;

    union money
    {
        int rice;
        char car;
        float pounds;
    };
    
    using namespace std;
    int main()
    { ep emp;
      union money m1;
        m1.rice=34;
        m1.car='c';
        m1.pounds=32.40;
        emp.ID=1;
        emp.name='A';
        cout<<m1.rice<<endl;  //Garbage value due to over write
        cout<<m1.car<<endl;  //Garbage value due to over write
        cout<<m1.pounds<<endl;
        cout<<emp.ID<<endl;
        cout<<emp.name<<endl;
        cout<<"Enter salary"<<endl;
        cin>>emp.salary;

        enum Meal{breakfast,lunch,dinner};
        cout<<breakfast<<endl;
        cout<<lunch<<endl;
        cout<<dinner<<endl<<endl;
        cout<<(lunch==2)<<endl;
        return 0;
}