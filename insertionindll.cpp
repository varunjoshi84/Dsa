#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;

    node(int info) {
        data = info;
        next = nullptr;
        prev = nullptr;
    }
};
node* insertInBetween(node* start, int targetValue, int newValue) {
    node* temp = start;
    while (temp != nullptr && temp->data != targetValue) {
        temp = temp->next;
    }
    if (temp != nullptr) {
        node* newnode = new node(newValue);

        newnode->next = temp->next; 
        newnode->prev = temp;        
        if (temp->next != nullptr) {
            temp->next->prev = newnode;  
        }
        temp->next = newnode;        
    }
    return start;
}
void printList(node* start) {
    node* temp = start;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main() {
    node* start = new node(10);
    node* second = new node(20);
    node* third = new node(30);
    start->next = second;
    second->prev = start;
    second->next = third;
    third->prev = second;
    printList(start);
    int item;
    cin>>item;
    start = insertInBetween(start, 20, item);
    printList(start);
}
