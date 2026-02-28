//*******************************List*******************************
#include <iostream>
#include <list>
// #include<vector>
using namespace std;
void display(list<int> &lst)
{
   list<int>::iterator it;
   cout << endl;
   for (it = lst.begin(); it != lst.end(); it++)
   {
      cout << *it << " ";
   }
}

int main()
{
   list<int> list1; // List of 0 length;
   list1.push_back(5);
   list1.push_back(7);
   list1.push_back(1);
   list1.push_back(9);
   list1.push_back(12);

   list<int>::iterator iter;
   iter = list1.begin();
   cout << *iter << " ";
   iter++;
   cout << *iter << " ";
   iter++;
   cout << *iter << " ";
   iter++;
   cout << *iter << " ";
   iter++;
   cout << *iter << " ";
   iter++;
   cout << *iter << " ";
   iter++;
   cout << *iter << " ";
   iter++;
   cout << *iter << " ";
   iter++;
   cout << *iter << " ";
   iter++;
   cout << *iter << " ";
   display(list1);

   // Ways to remove elements
   // list1.pop_back();
   // list1.pop_front();
   // list1.remove(9); -> if more that one occurences of the element, removes all
   // display(list1);

   // Sorting a list
   list1.sort();
   display(list1);

   // Reversing
   list1.reverse();
   display(list1);

   list<int> list2(3); // Empty list of size 3
   list<int>::iterator itert = list2.begin();
   *itert = 45;
   itert++;
   *itert = 9;
   itert++;
   *itert = 6;
   itert++;
   display(list2);

   // Merging
   list1.merge(list2);
   list1.sort();
   display(list1);

   /*
   {
   vector<int>vec1;
   vec1.push_back(5);
   vec1.push_back(7);
   vec1.push_back(1);
   vec1.push_back(9);
   vec1.push_back(12);

    Vector doesn't rebegin from the start like list when the end element
    is reached, it starts printing garbage values after one 0.

   vector<int> :: iterator itr ;
   itr = vec1.begin();
   cout<<endl;
   cout<<*itr<<" ";
   itr++;
   cout<<*itr<<" ";
   itr++;
   cout<<*itr<<" ";
   itr++;
   cout<<*itr<<" ";
   itr++;
   cout<<*itr<<" ";
   itr++;
   cout<<*itr<<" ";
   itr++;
   cout<<*itr<<" ";
   itr++;
   cout<<*itr<<" ";
   }
   */

   return 0;
}