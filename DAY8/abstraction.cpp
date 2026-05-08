#include <iostream>
using namespace std;
class ATM{
private:
    int balance;

public:
    ATM(int balance)
    {
        this->balance = balance;
    }    
    void withdraw(int amount)
    {
        if (amount > balance){
            cout << "Insuffficient balance" << endl;
        }
        else 
        {
            balance -= amount;
            cout << "Amount withdrawn:" << amount << endl;
        }
    }
    void showBalance()
    {
        cout << "Current balance:" << balance << endl;
    }
};
int main()
{
    ATM a(5000);
    a.showBalance();
    a.withdraw(500);
    a.showBalance();
    return 0;

    
}