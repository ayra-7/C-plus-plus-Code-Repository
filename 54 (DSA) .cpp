//*********************************Patterns************************
#include<iostream>
using namespace std;
// //inverse triangle
// int main()
// { int i,j,k;
//   int n=4;
//   char ch='A';
//         //rows
//     for(i=0;i<n;i++)
//     {
//         //spaces
//      for(j=0;j<i;j++)
//      {
//         cout<<" ";
//      }
//         //no.of elements
//       for(j=0;j<n-i;j++)
//       { //elements  
//         cout<<ch<<"";
//       }
//      cout<<endl;
//         ch++;
//    }
//     return 0;
// }  

//  // pyramid
//    int main()
//    {
//     int i,j;
//     int n=4;
//       // rows
//     for(i=0;i<n;i++)
//     {
//       // spaces
//       for(j=0;j<n-i-1;j++)
//       {
//         cout<<" ";
//       }
//       // no. of elements
//       for( j=1;j<=i+1;j++)
//       {
//         //elements1
//         cout<<j;
//       }
//       for(j=i;j>0;j--)
//       { //elements2
//         cout<<j;
//       }
//       cout<<endl;
//     }
// 
// return 0;
//    }

 //hollow diamond
   int main()
   {
    int i,j;
    int n=4;
    //top
      //rows
      for(i=0;i<n;i++)
      {
        //spaces1
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
            cout<<"*";
        if(i!=0)
        {   //spaces2
            for(j=0;j<2*i-1;j++)
            {
                cout<<" ";
            }
                cout<<"*";
        }
            cout<<endl;
      }

     // bottom
        //rows
        for(i=0;i<n-1;i++)
        {
            //spaces1
            for(j=0;j<=i;j++)
            {
                cout<<" ";
            }
            cout<<"*";
            if(i!=n-2)
            {
                //spaces2
                for(j=0;j<2*(n-i)-5;j++)
                {
                    cout<<" ";
                }
                
                cout<<"*";
            }
            cout<<endl;
        }

        return 0;
   }
