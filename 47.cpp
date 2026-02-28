//**********************File I/P,O/P reading and writing************************
#include<iostream>
#include<fstream>
using namespace std;

int main()
{ 
    //opening file using constructor and writing into it
    string st = "Hello!!\nAyra";
    //fstream out("47_1.txt");
    //out<<st;
    ofstream out("47_1.txt");
    out<<st;
     
     //opening a file using constructor and reading from it
     string str1;
    // fstream in("47_1.txt");
    // //in>>str1;
    // getline(in,str1);
    // cout<<str1; 
    // getline(in,str1);
    // cout<<str1; 
    ifstream in("47_2.txt");
     //in>>str1;
     getline(in,str1);
     cout<<str1; 

    return 0;
}