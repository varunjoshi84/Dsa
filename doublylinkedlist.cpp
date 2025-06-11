#include <iostream>
using namespace std;
class node{
    public:
    node *next;
    int data;
    node *prev;
    node(int info){
        data = info;
        prev = nullptr;
        next = nullptr;
    }
};
node *insertingintobeg(node *first, int info){
    if(first==nullptr){
        first = new node(info);
        return first;
    }
    node *newnode = new node(info);
    first->prev = newnode;
    newnode->next = first;
    return newnode;
}

int main(){
   node *start = nullptr;
   node *end = nullptr;

   start = insertingintobeg(start,10);
   start = insertingintobeg(start,20);
   start = insertingintobeg(start,30);
   start = insertingintobeg(start,40);
   start = insertingintobeg(start,50);
   start = insertingintobeg(start,60);
   start = insertingintobeg(start,70);
   end = start;
   node *ptr = start;
   while(ptr!=nullptr){
    cout<<ptr->data<<"->";
    ptr=ptr->next;
   }
   cout<<"NULL";

}
