#include <iostream>
using namespace std;
class Node {
public:
    int info;
    Node* link;
    Node(int data) {
        info = data;
        link = nullptr;
    }
};
class Stack {
private:
    Node* top; 
public:
    Stack() {
        top = nullptr;
    }
    void push(int data) {
        Node* newNode = new Node(data);
        newNode->link = top; 
        top = newNode;       
        cout << "Pushed: " << data << endl;
    }
    void pop() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Popped: " << top->info << endl;
        Node* temp = top;
        top = top->link; 
        delete temp;     
    }
    void display() {
        if (top == nullptr) {
            cout << "Stack is empty" << endl;
            return;
        }
        Node* ptr = top;
        cout << "Stack contents: ";
        while (ptr != nullptr) {
            cout << ptr->info << " ";
            ptr = ptr->link;
        }
        cout << endl;
    }
    ~Stack() {
        while (top != nullptr) {
            pop();
        }
    }
};
int main() {
    Stack stack; 
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display();
    stack.pop();
    stack.display(); 

    return 0;
}
