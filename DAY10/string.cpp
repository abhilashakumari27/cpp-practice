#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
    string str1 = "Hello";
    string str2 = "Jecrc";
    cout << "str1: " << str1 << ", str2: " << str2 << endl;
     
    // methods 
    // length
    
    int n = str1.length();
    cout << "Length of String is:" << n << endl;

    // append

    cout << "After Appending String is:" <<str1.append("Students")<< endl;
    cout << "Is String Empty:" << str2.empty() << endl;

    // empty

    cout << "After Concatenation of String is:" << str1 + "Bachho" << endl;
    cout << "After Concatenation of String is 2:" << str1 << endl;
    
    str2.push_back('U');
    cout << "After push_back()method:" << str2 << endl;
    str2.pop_back();
    cout << "After pop_back()method:" << str2 << endl;


    //find method;
    int index = str1.find("ello");
    cout << "Index of 'ello' in str1:" << index << endl;

     // swap method
    str1.swap(str2);
    cout << "After swapping str1 and str2:" << endl;
    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    // substr() method
    string substr = str2.substr(5 ,6);
    cout << "Substring of str2 from index 5 with length 6:" << substr << endl;
    // getline() method
    string str3;
    // cin >> str3;
    getline(cin,str3);
    cout <<"You entered: " << str3 << endl;
    
    return 0;

}