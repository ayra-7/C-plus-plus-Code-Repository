//**********************************Vectors**************************** 
#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    // Ways to create a vector
    cout << "Ways to create a vector " << endl;
    /**/ vector<int> vec1; // Zero length integer vector
    int elements;
    int size;
    cout << "Enter the size of vector1" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter elements ";
        cin >> elements;
        vec1.push_back(elements);
    }
    vec1.pop_back();
    display(vec1);
    cout << endl;

    /**/ vector<char> vec2(4); //  4-element character vector of 8
    vec2.push_back('8');
    vec2.push_back('8');
    vec2.push_back('8');
    vec2.push_back('8');
    vec2.push_back('8');
    display(vec2);
    cout << endl;

    /**/ vector<char> vec3(vec2); // 4- element character vector of vec2
    display(vec3);
    cout << endl;

    /**/ vector<int> vec4(6, 3); // 6-element vector of 3
    display(vec4);

    // Iteration
    cout << "\n\nIteration" << endl;
    vector<int>::iterator iter = vec1.begin();
    vec1.insert(iter + 1, 5, 50);
    display(vec1);
    cout << "\nSize of vec1 after one pop_back: " << vec1.size() << endl;

// int a[5]={2,3,4,5,6,7};  -> Error
    int a[size];
    a[0]=2;
    a[1]=2;
    a[2]=2;
    a[3]=2;
    a[4]=2;
    a[5]=1;
    for(int i=0;i<7;i++)
    {
        cout<<a[i];
    }
    return 0;
}

 
