// //*****************Reading and writing into same file, close()**************
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     // connecting our file with hout stream
//     ofstream hout("47_1.txt");
//      // Creating a new string and filling it with string entered by user
//      string name;
//      cout<<"Enter your name"<<endl;
//      cin>>name;
// 
//      //writing a string to the file
//      hout<<"My name is "<<name<<endl;
//      hout.close();
// 
//      ifstream hin("47_1.txt");
//      string content;
//      getline(hin,content);
//      cout<<"The content of this file is "<<endl<<content<<endl;
//      hin.close();
//     
//     return 0;
// }

//*************************File open() and eof()****************************
#include<iostream>
#include<fstream>
using namespace std;
int main()
{ 
    // opening file using open() member function
    ofstream out;
    out.open("47_2.txt");
    out<<"This is me\nThis is Ayra\nThis is also me"<<endl;
    out.close();

    ifstream in;
    string str;
    in.open("47_2.txt");
    while(in.eof()==0)
    {
    getline(in,str);
    cout<<str<<endl;;
    }
    in.close();
    
    return 0;
}