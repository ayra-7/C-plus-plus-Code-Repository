//****************Array of objects using pointers*************************
#include<iostream>
using namespace std;
class shopitem
{
  int Id;
  int price;
  public:
   void setData(int id, int pr)
   {
    Id=id;
    price=pr;
   }
   void showData()
   {
    cout<<"Id of item: "<<Id<<endl;
    cout<<"Price of item: "<<price<<endl;
   }
};
int main()
{
    int i,p,q,size=3;
    shopitem *Shop=new shopitem[size];
    shopitem *Shoptemp = Shop;  
    for(i=0;i<size;i++)
    {
    cout<<"Enter Id of item "<<i+1<<": "<<endl;
    cin>>q;
    cout<<"Enter Price of item "<<i+1<<": "<<endl;
    cin>>p;
    }
    for(i=0;i<size;i++)
    {
    cout<<"Item no.: "<<i+1<<endl;
    (*(Shop+i)).setData(q,p);
    (Shoptemp)->showData();
    }

    return 0;
}