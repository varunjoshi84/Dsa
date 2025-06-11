// #include <iostream>
// using namespace std;
// class node{
//     public:
//     int info;
//     node *link;
// };
// int main(){
//     int n,data;
//     node *ptr,*newnode,*start;
//     cin>>n;
//     start = new node();
//     cin>>data;
//     start->info=data;
//     start->link = NULL;
//     ptr=start;
//     for(int i=2; i<=n; i++){
//         newnode = new node();
//         cin>>data;
//         newnode->info=data;
//         newnode->link=NULL;
//         ptr->link=newnode;
//         ptr=ptr->link;
//     }
//     ptr=start;
//     while(ptr!=NULL){
//         cout<<ptr->info<<" ";
//         ptr=ptr->link;
//     }

// }
// #include <iostream>
// using namespace std;
// class node{
//   public:
//     int info;
//     node *link;
// };
// int main(){
//     int n,data;
//     node *start,*newnode,*ptr;
//     cin>>n;
//     start=new node();
//     cin>>data;
//     start->info=data;
//     start->link=NULL;
//     ptr=start;
//     for(int i=2; i<=n; i++){
//         newnode = new node();
//         cin>>data;
//         newnode->info=data;
//         newnode->link=NULL;
//         ptr->link=newnode;
//         ptr=ptr->link;
//     }
//     ptr=start;
//     while(ptr!=NULL){
//         cout<<ptr->info<<" ";
//         ptr=ptr->link;
//     }
// }