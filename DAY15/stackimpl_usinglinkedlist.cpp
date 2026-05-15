#include<iostream>
using namespace std;
class stack{
    private:
    struct Node {
        int data;
        Node* next;
    };
    Node* top;

    public:
    stack(){
        top = NULL;
    }

    void push(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
    }

    void pop(){
        if(top == NULL){
            cout << "stack underflow" << endl;
            return;
        }
        Node* temp = top;
        top  = top->next;
        delete temp;
    }

    int peek(){
        if(top ==NULL){
            cout << "stack is empty" << endl;
            return -1;
        }
       return top->data;
    }
    void display() {
        Node* temp = top;

        while(temp!= NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: "<< s.peek() << endl;
    s.pop();

    cout <<" After pop: ";
    s.display();
    return 0;

}

