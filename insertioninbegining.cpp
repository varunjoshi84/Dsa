// #include <iostream>
// using namespace std;
// class node{
//     public:
//     int info;
//     node *link;
// };
// Node* insert(Node* start, int data){
//     Node* newnode = new Node();
//     newnode->info = data;
//     newnode->link=start;
//     start=newnode;
//     return start; 
// }
// int main(){
//     int n,data;
//     node *start,*ptr,*newnode;
//     cin>>n;
//     start = new node();
//     cin>>data;
//     start->info=data;
//     start->link=NULL;
//     ptr=start;
//     for(int i=2; i<=n; i++){
//         newnode = new node;
//         cin>>data;
//         newnode->info=data;
//         newnode->link=NULL;
//         ptr->link=newnode;
//         ptr=ptr->link;
//     }
//     ptr=-start;
//     while(ptr!=NULL){
//         cout<<ptr->info;
//         ptr=ptr->link;
//     }
//     int newitem;
//     cin>>item;
//     int x = insert(start,item);
//     if(x){
//         ptr=start;
//     while(ptr!=NULL){
//         cout<<ptr->info;
//         ptr=ptr->link;
//     }
//     }
// }
// #include <iostream>
// using namespace std;
// class node{
// public:
//     int info;
//     node *link;
// };
// node* searching(node* start,node* item){
//     node* ptr = start;
//     while(ptr!=NULL){
//         if(item==ptr->info){
//             return loc;
//         }else{
//             ptr=ptr->link;
//         }
//     }
//     return -1;
// } 
// node *insertionatanyposition(node* start, node *item){
    
// }
// node* insert(node* start, int newitem){
//     node* newnode = new node(); 
//     newnode->info = newitem;
//     newnode->link = start;
//     start = newnode;  
//     return start; 
// }
// int main(){
//     int n, data;
//     node *start = NULL, *ptr, *newnode;
//     cin >> n;
//     if (n <= 0) {
//         return 0;
//     }
//     cin >> data;
//     start = new node();
//     start->info = data;
//     start->link = NULL;
//     ptr = start;
//     for (int i = 2; i <= n; i++) {
//         newnode = new node;
//         cin >> data;
//         newnode->info = data;
//         newnode->link = NULL;
//         ptr->link = newnode;
//         ptr = ptr->link;  
//     }
//     ptr = start;
//     while (ptr != NULL) {
//         cout << ptr->info << " ";
//         ptr = ptr->link;
//     }
//     cout << endl;
//     int newitem;
//     cin >> newitem;
//     start = insert(start, newitem); 
//     ptr = start;
//     while (ptr != NULL) {
//         cout << ptr->info << " ";
//         ptr = ptr->link;
//     }
//     cout << endl;
// }

// #include <iostream>
// using namespace std;
// class node {
// public:
//     int info;
//     node *link;
// };
// node* insertionatanyposition(node* start, int item, int pos) {
//     node* newnode = new node();
//     newnode->info = item;  
//     if (pos == 1) {
//         newnode->link = start;
//         start = newnode;
//         return start;
//     }  
//     node* ptr = start;
//     for (int i = 1; i < pos - 1 && ptr != NULL; i++) {
//         ptr = ptr->link;
//     }
//     if (ptr != NULL) {
//         newnode->link = ptr->link;
//         ptr->link = newnode;
//     }   
//     return start;
// }
// int main() {
//     int n, data;
//     node *start = NULL, *ptr, *newnode; 
//     cin >> n;
//     cin >> data;
//     start = new node();
//     start->info = data;
//     start->link = NULL;
//     ptr = start;
//     for (int i = 2; i <= n; i++) {
//         newnode = new node;
//         cin >> data;
//         newnode->info = data;
//         newnode->link = NULL;
//         ptr->link = newnode;
//         ptr = ptr->link;
//     }
//     int newitem;
//     int position;
//     cin >> position>> newitem;
//     start = insertionatanyposition(start, newitem, position);    
//     ptr = start;
//     while (ptr != NULL) {
//         cout << ptr->info << " ";
//         ptr = ptr->link;
//     }
//     cout << endl;
//     return 0;
// }









































































































































































