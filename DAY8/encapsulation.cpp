#include <iostream>
using namespace std;
class ATM{
private:
    int balance;

public:
      
    void setBalance(int balance)
    {
        this->balance = balance;
    }
    void withdrawn(int amount)
    {
        if (amount > balance){
            cout << "Insuffficient Balance" << endl;
        }
        else 
        {
            balance -= amount;
            cout << "Remaining Balance:" << balance <<  endl;
        }
    }
    int getbalance()
    {
        return balance;
    }
};
int main()
{
    int n;
    cin >>n;
    ATM a;
    a.setBalance(n);
    cout << "Balance is:" << a.getbalance() << endl;
    a.withdrawn(500);
    cout << "Balance is:" << a.getbalance() << endl;
    return 0;

    
}