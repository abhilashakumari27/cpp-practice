#include <iostream>
using namespace std;

class stack{
    private:
    int arr[100];
    
    int top;

    public:
    stack(){
        top = -1;
    }

    void push(int val){
        if(top < 99){
            top++;
            arr[top] = val;
        }
        else {
            cout <<"stack overflow" <<endl;

        }
    }
    void pop(){
        if (top>= 0){
            top--;
        }
        else {
            cout << "stack underflow" << endl;
        }
    }
    int peek(){
        if (top >= 0){
            return arr[top];
        }
        else {
            cout <<"stack is empty" << endl;
        }
    }
    int size() {
        if(top >=0){
            return top +1 ;
        }
        else {
            cout <<" stack is empty" <<endl;
            return -1;
        }
    }
    bool isempty(){
        if(top <= -1){
            return true;
        }
        else return false;
    }
} ;
 int main(){
    stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    s.pop();

    cout << "Size of stack: " << s.size() << endl;

    if (s.isempty()) {
        cout << "Stack is empty" << endl;
    }
    else {
        cout << "Stack is not empty" << endl;
    }

    return 0;
}

