#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;

        for(int i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) 
        cout <<  "prime";
    else
        cout <<"Not a prime ";


    return 0;
}