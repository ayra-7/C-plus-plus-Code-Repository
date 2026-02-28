//********************************Multilevel Inheritance**************************************
#include <iostream>
using namespace std;
class student
{
    protected:
    int roll;
    public:
    void set_roll(int);
    void get_roll();
};
void student :: set_roll(int r)
{
    roll=r;
}
void student :: get_roll()
{
    cout<<"Roll no. is "<<roll<<endl;
}
class exam : public student
{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float, float);
    void get_marks();
};

void exam :: set_marks( float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void exam :: get_marks()
{
    cout<<" Maths' marks "<<maths<<endl;
    cout<<" Physics' marks "<<physics<<endl;
}

class result : public exam
{
    float percentage;
    public:
    void display()
    {
        get_roll();
        get_marks();
        cout<<"The result is "<<(maths+physics)/2<<"%"<<endl;
    }
};

// A--->B--->c  :  Inheritance path

int main() {
  result harry;
  harry.set_roll(101);
  harry.set_marks(94.0 , 90.0);
  harry.display();

    return 0;
}