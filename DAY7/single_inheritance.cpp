# include <iostream>
using namespace std;

class player{
    public:
    string name;
    int age;
    void setname (string n){
        name = n;

    }
};

class cricketers : public player{
    public:
   int runs;
   void setruns (int r){
    runs = r;
   }
   void show()
   {
    cout << "Name: " << name << endl;
    cout << "Runs: " << runs << endl;
   }
};

int main()
{
    int r;
    cin >> r;
    cricketers c1;
    c1.setname("dhoni");
    c1.setruns(7);
    c1.show();
}