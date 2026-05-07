#include <iostream>
using namespace std;
class Player
{
public:
    virtual void show() = 0; // Pure virtual function
};

class cricketers : public Player
{
    
public:
   int a;
   // Implementation of pure virtual function
    void show()
    {
        cout << "cricketer class show function" << endl;
    }
};

int main()
{
    cricketers c1;
    c1.show();

    return 0;
}