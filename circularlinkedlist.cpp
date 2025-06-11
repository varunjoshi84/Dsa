#include <iostream>
using namespace std;

class node {
public:
    int info;
    node *link;
};

int main() {
    int n, data;
    cin >> n;
    node *ptr, *start, *newnode;
    start = new node();
    start->link = NULL;
    ptr = start; 
    for (int i = 1; i <= n; i++) {
        newnode = new node();
        cin >> data;
        newnode->info = data;
        newnode->link = NULL;
        ptr->link = newnode; 
        ptr = ptr->link; 
    }
    ptr = start->link; 
    while (ptr != NULL) {
        cout << ptr->info << " ";
        ptr = ptr->link;
    }
    
}
