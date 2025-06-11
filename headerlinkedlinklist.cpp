// #include <iostream>
// using namespace std;

// class node {
// public:
//     int info;
//     node *link;
// };

// int main() {
//     int n, data;
//     cin >> n;
//     node *start = new node();
//     start->info = 0;
//     start->link = NULL;
//     node *ptr, *newnode;
//     for (int i = 1; i <= n; i++) {
//         newnode = new node();
//         cin >> data;
//         newnode->info = data;
//         newnode->link = NULL;

//         if (start->link == NULL) {
//             start->link = newnode;
//         } else {
//             ptr = start->link;
//             while (ptr->link != NULL) {
//                 ptr = ptr->link;
//             }
//             ptr->link = newnode;
//         }
//         start->info++;
//     }

//     cout << start->info << endl;
//     ptr = start->link;
//     while (ptr != NULL) {
//         cout << ptr->info << " ";
//         ptr = ptr->link;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

class node {
public:
    int info;
    node *link;
    node(int data) {
        info = data;
        link = NULL;
    }
};

node *insertinto(node *start, int data) {
    node *newnode = new node(data);  
    if (start->link == start) {  
        start->link = newnode;
    } else {
        node *ptr = start->link; 
        while (ptr->link != start && ptr->link != NULL) {  
            ptr = ptr->link;
        }
        ptr->link = newnode;  
    }
    newnode->link = start;  
    start->info++;  
    return start;
}

int main() {
    int n, info;
    cin >> n;
    node *start = new node(0);  
    start->link = start;  
    for (int i = 1; i <= n; i++) {
        cin >> info;
        start = insertinto(start, info);  
    }
    node *ptr = start->link;
    while (ptr != start) {  
        cout << ptr->info << " ";
        ptr = ptr->link;
    }
    return 0;
}
