#include <iostream>
using namespace std;

int main()
{
    int p;
    cin >> p;
    if (p >= 90 && p <= 100)
        cout << "Grade: A";
    else if (p >= 80)
        cout << "Grade: B";
    else if (p >= 70)
        cout << "Grade: C";
    else if (p >= 60)
        cout << "Grade: C";
    else if (p >= 0)
        cout << "Grade: D"; 
    else if (p >= 0)
        cout << "Invalid input";
                   
    return 0;
}
