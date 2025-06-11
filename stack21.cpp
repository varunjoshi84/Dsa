#include <iostream>
using namespace std;
class node{
    public:
    int info;
    node *link;
};
void push(node* &top, int data){
    node *newnode = new node();
    newnode->info=data;
    newnode->link=top;
    top=newnode;
}
void pop(node* &top){
    if(top==nullptr){
        return;
    }
    node* temp = top;
    top = top->link;
    delete temp; 
}
void display(node* top){
    node *ptr = top;
    while(ptr!=nullptr){
        cout<<ptr->info<<" ";
        ptr=ptr->link;
    }
    cout<<endl;

}
int main(){
    node *top= nullptr;
    push(top,10);
    push(top,20);
    push(top,30);
    push(top,40);
    push(top,50);
    display(top);
    pop(top);
    pop(top);
    display(top);
}