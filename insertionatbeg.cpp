#include <iostream>
using namespace std;
class node{
    public:
    int info;
    node *link;
};
int searchInSortedLL(node *start, int key) {
    node *ptr = start;
    int pos = 1; 
    while (ptr != NULL) {
        if (ptr->info == key) {
            return pos; 
        }
        if (ptr->info > key) {
            return -1; 
        }
        ptr = ptr->link;
        pos++; 
    }
    return -1;  
} 


node* insertion(node *start,int x){
   node *temp=new node;
   temp->info=x;
   temp->link=start;
   return temp;
}
node* iaap(node* start, int x,int pos){
    node *temp=new node;
    temp->info =x;
    temp->link=NULL;
    if(pos==1){
        temp->link=start;
        return temp;
    }
    node *ptr = start;
    for(int i=1; i<pos - 1 && ptr !=NULL; i++){
        ptr=ptr->link;
    }
    if(ptr==NULL){
        return start;
    }
    temp->link = ptr->link;
    ptr->link=temp;
    return start;
}
void printll(node* start){
    while(start!=NULL){
        cout<<start->info<<" ";
        start = start->link;
    }
}
int main(){
    int n,data;
    node *start,*ptr,*newnode;
    cin>>n;
    start = new node;
    cin>>data;
    start->info=data;
    start->link=NULL;
    ptr=start;
    for(int i=2; i<=n; i++){
        newnode=new node;
        cin>>data;
        newnode->info=data;
        newnode->link=NULL;
        ptr->link=newnode;
        ptr=ptr->link;

    }
    // ptr=start;
    int pos;
    int x;
    cin>>x>>pos;
    // start=insertion(start,x);
    searchInSortedLL(start, key)
    start=iaap(start,x,pos);
    printll(start);
}
