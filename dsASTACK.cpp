#include <iostream>
using namespace std;

class node {
public:
    int info;
    node *link;
};

void push(node*& top, int data) {
    node *newnode = new node();
    newnode->info = data;
    newnode->link = top;
    top = newnode;
}

node* pop(node*& top) {
    if (top == nullptr) {
        return nullptr;
    }
    node *temp = top;
    top = top->link;
    delete temp;
    return top;
}

void display(node* top) {
    node *ptr = top;
    while (ptr != nullptr) {
        cout << ptr->info << " ";
        ptr = ptr->link;
    }
    cout << endl;
}

int main() {
    node *top = nullptr;
    push(top, 10);
    display(top);
    push(top, 20);
    display(top);
    pop(top);
    display(top);
    
    return 0;
}
