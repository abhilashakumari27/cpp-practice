# include <iostream>
using namespace std;
class cricketers{
    string name;
    int runs;
public:
     // parameterized constructor
    cricketers(string n,int r){
    name = n;
    runs = r;

}
 // copy constructor
cricketers (const cricketers &c){
    this->name = c.name;
    this->runs = c.runs;
}
void show()


  {
    cout << "Name: " << name << endl;
    cout << "Runs: " << runs << endl;
  }

};
int main()
{
    cricketers c1("dhoni",12000);
    c1.show();
    cricketers c2(c1);
    c2.show();
    return 0;
}