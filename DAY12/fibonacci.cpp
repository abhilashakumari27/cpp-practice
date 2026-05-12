#include<iostream>
using namespace std;

int fib(int x){
    if (x== 1 || x ==2)
    return 1;
    if(x == 0)
    return 0; 

    return fib(x-1) + fib(x-2);
}

int  main()
{
    int x;
    cin >> x;
    cout << "Factorial is:" <<fib(x) << endl;
    return 0;
}
