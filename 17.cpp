//**************************Array of class*********************** 
#include <iostream>
using namespace std;
class shop
{
    int itemid[50];
    int itemprice[50];
    int counter;

public:
    void counterc() { counter = 0; }
    void setitem();
    void displayitem();
};

void shop ::setitem()
{
    int i;
    cout << "enter the total no. of items in shop:" << endl;
    cin >> counter;

    for (/*int  --->  X will give wrong results*/ i = 0; i < counter; i++)
    {
        cout << "Enter the item Id of item " << i + 1 << endl;
        cin >> itemid[i];
        cout << "Enter the item price" << endl;
        cin >> itemprice[i];
    }
}
void shop ::displayitem()
{
    for (int i = 0; i < counter; i++)
    {
     cout <<"The itemId with Item's price: " <<itemid[i] << " -> " <<itemprice[i]<<endl;
    }
}
int main()
{
    shop A;
    // A.counterc();
    A.setitem();
    A.displayitem();
    return 0;
}
