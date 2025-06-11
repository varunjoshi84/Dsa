#include <iostream>
using namespace std;
class node{
    int info;
    node *prev;
    node *next;
    node(int data){
        data = info;
        prev = NULL;
        next = NULL;
    }

};
node *atbeg(node *head, int info){
    if(head==nullptr){
        head = new node(info);
        return head;
    }
    node *newnode = new node(info);
    head->prev = newnode;
    newnode->next = head;
    return newnode;
}
int main(){
    
} 

