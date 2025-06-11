// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     for(int i=0; i<n-1; i+=2){
//         swap(arr[i],arr[n-1]);
//     }
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
// }

#include <iostream>
using namespace std;
class node{
    public:
    int info;
    node *link;
};
void print(node* start){
    node* ptr = start;
    while(ptr!=NULL){
        cout<<ptr->info<<" ";
        ptr=ptr->link;
    }
}
int search(node *start, int item){
    node *ptr = start;
    int count = 0;
    while(ptr!=NULL){
        if(ptr->info==item){
            return count;
        }
        else{
            ptr=ptr->link;
            count++;
        }
    }
    return -1;
}
node* del(node* start,int item){
    node *ptr = start;
    node* prev = NULL;
    if(ptr==NULL){
        return start;
    }
    if(ptr->info == item){
        node* temp = ptr;
        start = ptr->link;
        delete temp;
        return start;
    }
    while(ptr!=NULL && ptr->info != item){
        prev = ptr;
        ptr = ptr->link;
    }
    if(ptr==NULL){
        return start;
    }
    prev->link = ptr->link;
    delete ptr;
    return start;
}
int main(){
    int n,data;
    node *start,*newnode, *ptr;
    cin>>n;
    start = new node();
    cin>>data;
    start->info=data;
    start->link=NULL;
    ptr=start;
    for(int i=2; i<=n;i++){
        newnode = new node();
        cin>>data;
        newnode->info=data;
        newnode->link=NULL;
        ptr->link=newnode;
        ptr=ptr->link;
    }
    int item;
    cin>>item;
    // int x = search(start,item);
    // if(x!=-1){
    //     cout<<"found at: "<<x<<endl;
    // }else{
    //     cout<<"Not found"<<endl;
    // }
    start = del(start, item);
    ptr = start;
    while(ptr!=NULL){
        cout<<ptr->info<<"->";
        ptr=ptr->link;
    }
    // print(start);
    
}