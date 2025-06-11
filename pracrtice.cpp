#include <iostream>
using namespace std;
class node{
    public:
    int info;
    node *link;

};
void print(node *start){
    node *ptr = start;
    while(ptr!=NULL){
        cout<<ptr->info<<"->";
        ptr=ptr->link;
    }
    cout<<"NULL"<<endl;
}
node *atbeg(node *start, int first){
    node *newnode = new node();
    newnode->info=first;
    newnode->link=start;
    return newnode;

}
int searching(node *start, int item){
    node *ptr = start;
    int count=0;
    while(ptr!=NULL){
        if(ptr->info==item){
            count++;
            return count;
        }else{
            ptr=ptr->link;
        }
    }
    return -1;
}
int main(){
    int n,data;
    node *ptr,*start,*newnode;
    cin>>n;
    start = new node();
    cin>>data;
    start->info=data;
    start->link=NULL;
    ptr = start;
    for(int i=2; i<=n; i++){
        newnode = new node();
        cin>>data;
        newnode->info=data;
        newnode->link=NULL;
        ptr->link=newnode;
        ptr=ptr->link;
    }
    // int first;
    // cin>>first;
    // int item;
    // cin>>item;
    // start=atbeg(start,first);
    print(start);
    // int search = searching(start,item);
    // if(search!=-1){
    //     cout<<search<<" ";
    // }else{
    //     cout<<"Not found";
    // }
    
}