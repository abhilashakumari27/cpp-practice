#include <iostream>
using namespace std;

class Car
{
private:
    int Speed;

public:
    Car()
    {
        Speed = 120;
    }

    void showSpeed() const

    
    {
       // Speed = 150;
        cout << "Speed is:"<< Speed << endl;
    }
};

int main()
{
   Car c1;
   c1.showSpeed();
   return 0;
}


    