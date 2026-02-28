#include<iostream>
using namespace std;
int main()
{
int i;

for (i = 1; i<10; i++)
{  
    if(i%2==0){
        continue;
    }
    cout<<i<<endl;
    if(i==5){
        break;
    }}
    return 0;
}
