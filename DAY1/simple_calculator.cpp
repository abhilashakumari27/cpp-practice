/*
problem : Simple Calculator
write a program that takes two numbers and  an operator and an operator (+,-,*,/).use a switch-case statement to perform the operation and display the result. Handle invalid operators.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

     int temp = a;
     a = b;
     b = temp;

     cout << a << "\n"
            << b << endl;

            return 0;

    }