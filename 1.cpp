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
        cout<<ptr->info<<" ";
        ptr=ptr->link;
    }
}
// node *atbeg(node *start, int data){
//     node *ptr = start;
//     if(ptr!=NULL){
//         node *newnode = new node();
//         newnode->info = data;
//         newnode->link = ptr;

//         return newnode;
//     }
// }

// node *atlast(node *start, int data){
//     node *ptr = start;
//     while(ptr->link != NULL){
//         ptr = ptr->link;
//     }
//     node *newnode = new node();
//     newnode->info = data;
//     newnode->link = NULL;
//     ptr->link = newnode;
//     return start;    
// }

// node *atmid(node *start,int element, int data){
//     node *ptr = start;
//     while(ptr!=nullptr){
//         if(ptr->info==element){
//             node *newnode = new node();
//             newnode->info = data;
//             newnode->link = ptr->link;
//             ptr->link=newnode;
//             return start;
//         }
//         ptr = ptr->link;
//     }
//     return start;
// }
// node *delatbeg(node *start){
//     node *ptr = start;
//     if(ptr!=NULL){
//         start=ptr ->link;
//         delete ptr;
//     }
//     return start;
// }
// node *delatend(node *start){
//     node *ptr = start;
//         while(ptr!=nullptr){
//             if(ptr->link->link==nullptr){
//                 start = ptr->link;
//                 delete ptr;
//             }
//         }
//         return start;
// }
// int  element(node *start, int element){
//     node *ptr = start;
//     int count=1;
//     while(ptr!=NULL){
//         if(ptr->info==element){
//             return count;
//         }
//         ptr=ptr->link;
//         count++;
//     }

// }

// node *atbeg(node *start, int data,int pos,int n){
//     node *ptr = start;
//     if(pos==1){
//         node *newnode = new node();
//         newnode->info=data;
//         newnode->link=ptr;
//         ptr=ptr->link;
//         return newnode;
//     }else if(pos<=n){
//         while(ptr!=nullptr){
//             if(ptr->info==pos){
//                 node *newnode = new node();
//                 newnode->info=data;
//                 newnode->link = ptr->link;
//                 ptr->link = newnode;
//                 return start;
//             }
//             ptr=ptr->link;
//         }
//         return start;
//     }
//     else{
//         return nullptr;
//     }
// }
// node *anyposition(node *start, int data,int pos,int n){
//     node *ptr = start;
//     if(pos==1){
//         node *newnode = new node();
//         newnode->info = data;
//         newnode->link = ptr;
//         ptr = ptr->link;
//         return newnode;
//     }else if(pos<=n){
//         while(ptr!=nullptr){
//             if(ptr->info==pos){
//             node *newnode = new node();
//             newnode->info = data;
//             newnode->link = ptr->link;
//             ptr->link=newnode;
//             return start;
//         }
//         ptr=ptr->link;
//         }
//         return start;
//     }

//     else{
//         return nullptr;
//     }
// }
// node *deleteatanypos(node *start,int pos){
    
//     if(pos==1){
//         node *ptr = start;
//         start = start->link;
//         delete ptr;
//         return start;
//     }else{
//         node *curr = start;
//         node *prev = NULL;
//         int count=1;
//         while(curr!=nullptr && count<pos){
//             prev = curr;
//             curr = curr->link;
//             count++;
//         } 
//         if(curr==nullptr){
//             return start;
//         }
//         prev->link = curr->link;
//         delete curr;
//         return start;
//     }    
// }
node *deleteatanypos(node *start, int pos){
    
    if(pos==1){
        node *ptr = start;
        start = ptr->link;
        delete ptr;
        return start;
    }
    else{
        node *curr = start;
        node *prev = NULL;
        int count = 1;
        while(curr!=nullptr && count<pos){
            prev = curr;
            curr = curr->link;
            count++;
        }
        if(curr==nullptr){
            return start;
        }
        prev->link=curr->link;
        delete curr;
        return start;
    }
}
int main(){
    int n,data;
    cin>>n;
    node *ptr,*start,*newnode;
    start=new node();
    cin>>data;
    start->info=data;
    start->link =NULL;
    ptr = start;
    for(int i=2; i<=n; i++){
        newnode = new node();
        cin>>data;
        newnode->info = data;
        newnode->link = NULL;
        ptr->link = newnode;
        ptr=ptr->link;
    }
    // print(start);

    // ptr = start;
    // int pos;
    // cin>>pos;
    // int element;
    // cin>>element;
    // int same;
    // cin>>same;
    // start = anyposition(start,element,10,n);
    // start = atlast(start,element);
    
    // start = atmid(start, same,element);
    // int x = element(start,pos);
    // start = deleteatanypos(start,x);
    // if(start==nullptr){
    //     cout<<"position out of bound";
    // }else{
    //     print(start);
    // }
    
    start = deleteatanypos(start,3);
    print(start);
    
}