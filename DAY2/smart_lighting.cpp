#include <iostream>
using namespace std;

int main()
{
    string time;
    bool motion;

    cin >> time >> motion;

    if (time == "Night" || time == "night")
    {
        if (motion)
           cout << "Full Brightness";
           else
           cout << "Dim Mode";
    }
    else
    {
        cout << "Lights OFF";
    }
    // Process the time input for smart lighting logic
    return 0;
}