#include <iostream>
using namespace std;
class node{
    public:
    int info;
    node *link;
};
int search(node* start, int item){
        node* ptr = start;
        int index=0;
        while(ptr!=NULL){
            if(ptr->info==item){
                return index;
            }
            ptr=ptr->link;
            index++;
        }
        return -1;
}
int main(){
    int n ,data;
    node *start,*ptr,*newnode;
    cin>>n;
    start = new node;
    cin>>data;
    start->info=data;
    start->link = NULL;
    ptr=start;
    for(int i=2; i<=n;i++){
        newnode = new node;
        cin>>data;
        newnode->info=data;
        newnode->link=NULL;
        ptr->link=newnode;
        ptr=ptr->link;
    }
    int item;
    cin>>item;
    int x = search(start,item);
    if(x!=-1){
        cout<<"Item found at: "<< x<<endl;
    }else{
        cout<<"Item not found"<<endl;
    }
    // ptr=start;
    // while(ptr!=nullptr){
    //     cout<<ptr->info<<"->";
    //     ptr=ptr->link;
    // }

}
