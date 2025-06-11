#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node *prev;
    node(int info){
        data = info;
        prev = NULL;
        next = NULL;
    }
};
node *insertatbeg(node *head, int info){
    if(head==NULL){
        head = new node(info);
        return head;
    }
    node *newnode = new node(info);
    head->prev = newnode;
    newnode->next = head;
    return newnode;
}
void print(node *start){
    node *ptr = start;
    while(ptr!=NULL){
        cout<<ptr->data<<"<->";
        ptr=ptr->next;
    }
    cout<<"NULL";
}
int main(){
    int n;
    cin>>n;
    int a[n];
    node *start = NULL;
    node *end = NULL;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        start=insertatbeg(start,a[i]);
    }
    end = start;
    print(start);
}