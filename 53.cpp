// //***************************Map***************************
// #include<iostream>
// #include<map>
// #include<string>
// using namespace std;
// int main()
// {
//     // Map is an associative array
//     map<string,int>mapMarks;
//        //  Key-value
//        mapMarks["Harry"] = 98,101;
//        mapMarks["Rohan"] = 69;
//        mapMarks["Jack"] = 9;
//        mapMarks.insert({{"Karan",80},{"Kashish",90}});
//        map<string,int> :: iterator iter;
//        for(iter=mapMarks.begin(); iter!=mapMarks.end();iter++)
//         {
//             cout<<(*iter).first<<" "<<(*iter).second<<"\n";
//                 // ptr.key              ptr.value
//         }       
//         cout<<"The size : "<<mapMarks.size()<<endl;
//         cout<<"The maxsize : "<<mapMarks.max_size()<<endl;
//         cout<<"The empty's return value : "<<mapMarks.empty()<<endl;
//     
//     
//     return 0;
// }

//*************************Function Objects (Functors)***************************
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;
int main()
{
   /* Function objects: Function wrappped in a class so that its available 
       like an object, object that works as a function */
       int arr[]={4,85,1,5,73};
       sort(arr,arr+5);
       for(int i =0; i<5;i++)
        {
            cout<<arr[i]<<" ";
        }    
        cout<<endl;
      sort(arr,arr+5,greater<int>());

       for(int i =0; i<5;i++)
        {
            cout<<arr[i]<<" ";
        }    
        cout<<endl;
      sort(arr,arr+5,less<int>());

       for(int i =0; i<5;i++)
        {
            cout<<arr[i]<<" ";
        }    
    return 0;
}