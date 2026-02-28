//*************************Function overloading*************************
#include<iostream>
using namespace std;
int add(float a, int b)
{
    cout<<"Using function with 2 args"<<endl;
    return a+b;
}
int add(int a, int b,int c)
{
    cout<<"Using function with 3 args"<<endl;
    return a+b+c;
}

// Volume of cylinder
  int volume(double r, int h)
  { cout<<"Cylinder"<<endl;
    return (3.14*r*r*h);
  }
// Volume of cube
  int volume(int s)
   
  { cout<<"Cube"<<endl;
    return (s*s*s);
  }  
// Volume of cuboid
  int volume(int l, int b, int h)
  { cout<<"Cuboid"<<endl; 
    return (l*b*h);
  }

    int main()
{
    cout<<"The sum of 3 and 6 is "<<add(3,6)<<endl<<endl;
    cout<<"The sum of 3, 6 and 9 is "<<add(3,6,1)<<endl<<endl;
    
    cout<<"The volume of cylinder is "<<volume(3,9)<<endl<<endl;
    cout<<"The volume of ccube is "<<volume(3)<<endl<<endl;
    cout<<"The volume of cuboid is "<<volume(3,6,9)<<endl;
    return 0;
} 