#include <iostream>
using namespace std;
struct Node {
    int info;
    Node* link;
};
void push(Node*& top, int data) {
    Node* newNode = new Node();
    newNode->info = data;
    newNode->link = top;
    top = newNode;
}
void pop(Node*& top) {
    if (top == nullptr) 
    return;
    Node* temp = top;
    top = top->link;
    delete temp;
}
void display(Node* top) {
    Node* ptr = top;
    while (ptr != nullptr) {
        cout << ptr->info << " ";
        ptr = ptr->link;
    }
    cout << endl;
}
int main() {
    Node* top = nullptr;
    push(top, 10);
    push(top, 20);
    push(top, 30);
    display(top);
    pop(top);
    display(top);

    while (top != nullptr) {
        pop(top);
    }

    return 0;
}
