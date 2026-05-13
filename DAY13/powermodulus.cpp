#include<iostream>
using namespace std;


bool isPow(int x)
{
  if (x == 0) 
  return false;
  if (x == 1)
  return true;
  return (x % 2== 0) && isPow(x/2);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
cout << "Enter the number:";
cin >> n;
bool result = isPow(n);

if(result)
cout << n << "is a power of 2." << endl;
cout << n << "is a not a power of 2." << endl;
    } 
    return 0;
}


