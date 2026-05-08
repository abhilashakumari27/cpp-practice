#include <iostream>
using namespace std;

namespace Dhoni{
    void show(){
        cout << "He is the part of CSK"<< endl;
    }
};
namespace Rohit{
    void show(){
        cout << "He is the part of MI"<< endl;
    }
};
int main()
{
    Dhoni:: show();
    Rohit:: show();
    return 0;
}