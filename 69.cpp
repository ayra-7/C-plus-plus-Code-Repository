//*********************STL- Vector**************** 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    // // Create a vector, declaration
    // vector<int>v;
    // vector<int>v1(5,1);
    // vector<int>v3{1,2,3,4,5}; 
    // //size and capacity
    // cout<<"Size of v: "<<v.size()<<endl;
    // cout<<"Capacity of v: "<<v.capacity()<<endl;
    // v.push_back(2);
    // v.push_back(4);
    // v.push_back(6);
    // cout<<"Size of v: "<<v.size()<<endl;
    // cout<<"Capacity of v: "<<v.capacity()<<endl;
    // //Updation
    // v[1]=5;

    // cout<<"Size of v1: "<<v1.size()<<endl;
    // cout<<"Capacity of v1: "<<v1.capacity()<<endl;
    // v1.push_back(8);
    // cout<<"Size of v1: "<<v1.size()<<endl;
    // cout<<"Capacity of v1: "<<v1.capacity()<<endl;

    // // Delete value from vector
    // vector<int>vnew;
    // vnew.push_back(2);
    // vnew.push_back(4);
    // vnew.push_back(6);
    // vnew.push_back(8);
    // vnew.push_back(10);
    // vnew.pop_back();
    // cout<<"Size of vnew: "<<vnew.size()<<endl;
    // cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;
    // vnew.erase(vnew.begin()+1);
    // cout<<"Size of vnew: "<<vnew.size()<<endl;
    // cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;
    // for(int i=0; i<vnew.size();i++)
    // cout<<vnew[i]<<" ";
    // vnew.insert(vnew.begin()+1,50); // inserts value at particular index
    // cout<<endl;
    // for(int i=0; i<vnew.size();i++)
    // cout<<vnew[i]<<" ";
    // vnew.clear();
    // cout<<endl;
    // cout<<"Size of vnew: "<<vnew.size()<<endl;
    // cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;

    //  vector<int>a;
    //  a.push_back(2);
    //  a.push_back(12);
    //  a.push_back(21);
    //  a.push_back(122);
    //  cout<<a[0]<<endl;
    //  cout<<a.front()<<endl;
    //  cout<<a[a.size()-1]<<endl;
    //  cout<<a.back()<<endl;

    //  //Copy value of 1 vector to another
    //  vector<int>b;
    //  b=a;
    //  cout<<b.size();
    //  cout<<endl;
    //  for(auto i: b)
    //  cout<<i<<" ";
    //  cout<<endl;

    // Sorting 
      //increasing order
     vector<int>ans;
     ans.push_back(5);
     ans.push_back(235);
     ans.push_back(15);
     ans.push_back(52);
     ans.push_back(125);
     sort(ans.begin(),ans.end());
     for(int i=0;i<ans.size();i++)
     cout<<ans[i]<<" ";
     cout<<endl;
    //    //decreasing order
    //  sort(ans.begin(),ans.end(),greater<int>());
    //  for(int i=0;i<ans.size();i++)
    //  cout<<ans[i]<<" ";
    //  cout<<endl;
    //  sort(ans.rbegin(),ans.rend() );
    //  for(int i=0;i<ans.size();i++)
    //  cout<<ans[i]<<" ";
    //  cout<<endl;

     //Searching in binary search 
     cout<<binary_search(ans.begin(),ans.end(),5)<<endl;

     cout<<find(ans.begin(),ans.end(),5)-ans.begin()<<endl;

     //lowerbound(value >=) and upperbound(value >)
     cout<<*lower_bound(ans.begin(),ans.end(), 2)<<endl;;
     cout<<*upper_bound(ans.begin(),ans.end(), 2)<<endl;

     // count
     cout<<count(ans.begin(),ans.end(),5)<<endl;

     







    return 0;
}