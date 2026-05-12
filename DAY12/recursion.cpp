#include<iostream>
using namespace std;

     int fac(int x)
     {
        if (x == 1)
        {
          return 1;
        }

           return x * fac(x-1);
            
    }

        int main()
        {
            int x;
            cin >> x;
            cout << "Factorial is:" <<fac(x) << endl;
            return 0;
        }