// //*********************************Ambiguity resolution***************************
//  #include<iostream>
//  using namespace std;
//  class base1
//  {
//      public:
//      void greet()
//      {
//          cout<<"How are you?"<<endl;
//      }
//  };
//  class base2
//  {
//      public:
//      void greet()
//      {
//          cout<<"Hello!!"<<endl;
//      }
//  };
//  class derived : public base1, public base2
//  {
//      int a;
//      public:
//
//    /* int greet()
//      {
//        base1::greet();
//      }
//      */
//
//      void greet()
//      {
//        base1::greet();
//      }
//  };
//
//  class B
//  {
//   public:
//    void say()
//    {
//      cout<<"Hello world"<<endl;
//    }
//  };
//  class D: public B
//  {
//   public:
//   //D's new say() method will overwrite B class's say() method
//   void say()
//   {
//   cout<<"Hello beautiful"<<endl;
//   }
//  };
//  int main()
//  {
//      // Ambiguity 1 (Manually resolved)
//     /*
//      base1 ob1;
//      ob1.greet();
//      base2 ob2;
//      ob2.greet();
//      derived d;
//      d.greet();
//      */
//
//     //Ambiguity 2 (Self resolved)
//       B b;
//       b.say();
//       D d;
//       d.say();
//      return 0;
//  }

//********************************Virtual Base Class*********************************
#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void set_roll(int r)
    {
        roll = r;
    }
    void print_roll()
    {
        cout << "Roll number: " << roll << endl;
    }
};

class test : virtual public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(int m, int p)
    {
        maths = m;
        physics = p;
    }
    void print_marks()
    {
        cout << "Your result is: " << endl
             << "Maths' marks: " << maths << endl
             << "Physics' marks: " << physics << endl;
    }
};

class score : virtual public student
{
protected:
    float scores;

public:
    void set_scores(int s)
    {
        scores = s;
    }
    void print_scores()
    {
        cout << "Scores: " << scores << endl;
    }
};

class result : public test, public score
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + scores;
        print_roll();
        print_marks();
        print_scores();
        cout << "Your Total out of 210 is: " << total << endl;
    }
};
int main()
{
    result harry;
    harry.set_roll(101);
    harry.set_marks(90, 92);
    harry.set_scores(9);
    harry.display();

    return 0;
}