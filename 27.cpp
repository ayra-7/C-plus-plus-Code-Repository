//*****************Inputting arg.s of constructor form user*******************
#include <iostream>
using namespace std;
class bankdeposit
{
    int principal;
    int years;
    int rate;
    int returnvalue;

public:
    bankdeposit() {}
    bankdeposit(int p, int y, float r); // r can be a value like 0.04
    bankdeposit(int p, int y, int R);   // R can be a value like 4
    void show();
};
bankdeposit ::bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    float(rate) = r;
    returnvalue = principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
}
bankdeposit ::bankdeposit(int p, int y, int R)
{
    principal = p;
    years = y;
    float(rate) = float(R) / 100;
    returnvalue = principal;
    for (int i = 0; i < years; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
}
void bankdeposit ::show()
{
    cout << "Principal amount was " << principal << endl
         << "Return value after " << years << " is "
         << returnvalue << endl;
}
int main()
{
    bankdeposit bd1, bd2/*,bd3*/;
    int p, y;
    int R;
    float r;

    //bd3.show();
    cout << "Enter value of p, y and r" << endl;
    cin >> p >> y >> r;
    bd1 = bankdeposit(p, y, r);
    bd1.show();
    cout << "Enter value of p, y and R" << endl;
    cin >> p >> y >> R;
    bd2 = bankdeposit(p, y, R);
    bd2.show();

    return 0;
}