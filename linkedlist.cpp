// //Making  node 

// #include <iostream>
// using namespace std;
// class Node{
//     public:
//     int data;
//     Node* next;

//     Node(int data){
//         this -> data = data;
//         this -> next = NULL;
//     }
// };

// int main(){
//     Node* node1 = new Node(10);
//     cout<<node1 -> data <<endl;
//     cout<<node1 -> next <<endl;
// }

// #include <iostream>
// using namespace std;
// class Node{
//     public:
//     int data;

// }
// #include <stdio.h>
// #include <stdlib.h>
// struct node {
//     int data;
//     struct node* next;
// };

// struct node* createNode(int data) {
//     struct node* newNode = (struct node*)malloc(sizeof(struct node));
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }
// void insertEnd(struct node** head, int data) {
//     struct node* newNode = createNode(data);
//     if (*head == NULL) {
//         *head = newNode;
//     } else {
//         struct node* temp = *head;
//         while (temp->next != NULL) {
//             temp = temp->next;
//         }
//         temp->next = newNode;
//     }
// }

// void printList(struct node* head) {
//     struct node* temp = head;
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// int main() {
//     struct node* head = NULL; 
//     int n, data;

//     printf("Enter the number of nodes: ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++) {
//         printf("Enter data for node %d: ", i + 1);
//         scanf("%d", &data);
//         insertEnd(&head, data);
//     }

//     printf("Linked list: ");
//     printList(head);
//     struct node* temp;
//     while (head != NULL) {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }

//     return 0;
// }
// #include <stdio.h>
// int main(){
//     int n,i,j;
    
//     struct node{
//         int data;
//         struct node* link;
//     },start, newnode;
//     printf("Enter the number of the node do you want to create");
//     scanf("%d",&n);
//     start = (node*)malloc(sizeof(node));
//     if(start==NULL){
//         printf("Node not created");
//     }else{
        
//     }
// }

//initialize and printing the linked list
// #include <stdio.h>
// #include <stdlib.h>
// struct node{
//     int info;
//     struct node *link;

// };
// int main(){
//     struct node *start, *first, *second, *third, *fourth, *ptr;
//     start = (struct node*)malloc(sizeof(struct node));
//     first = (struct node*)malloc(sizeof(struct node));
//     second = (struct node*)malloc(sizeof(struct node));
//     third= (struct node*)malloc(sizeof(struct node));
//     fourth = (struct node*)malloc(sizeof(struct node));
//     start->info = 10;
//     first->info = 20;
//     second->info = 35;
//     third->info = 25;
//     fourth->info = 148;
//     start->link = first;
//     first->link = second;
//     second->link = third;
//     third->link = fourth;
//     fourth->link = NULL;
//     ptr = start;
//     while(ptr!=NULL){
//         printf("%d ",ptr->info);
//         ptr = ptr->link;
//     }
// }

// #include <iostream>
// using namespace std;
// class node{
//     public:
//     int info;
//     node *link;
// };
// int main(){
//     node* start = new node;
//     node* first = new node;
//     node* second = new node;
//     node* third = new node;
//     node* fourth = new node;

//     cin>>start->info;
//     cin>>first->info;
//     cin>>second->info;
//     cin>>third->info;
//     cin>>fourth->info;

//     start->link = first;
//     first -> link = second;
//     second->link = third;
//     third->link = fourth;
//     fourth->link = NULL;

//     node *ptr = start;
//     while(ptr!=NULL){
//         cout<<ptr->info<<" ";
//         ptr=ptr->link;
//     }
    
// }
// #include <iostream>
// using namespace std;
// class node{
//     public:
//     int info;
//     node *link;
// };
// int main(){
//     int n,data;
//     node *ptr,*newnode;
//     cin>>n;
//     node *start = new node();
//     cin>>data;
//     start->info=data;
//     start->link =NULL;
//     ptr = start;
//     for(int i=2; i<=n; i++){
//         newnode=new node();
//         cin>>data;
//         newnode->info = data;
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
//     public:
//     int info;
//     node *link;
// };
// int main(){
//     int n,data;
//     node *ptr, *newnode;
//     cin>>n;
//     node *start = new node();
//     cin>>data;
//     start->info=data;
//     start->link=NULL;
//     ptr = start;
//     for(int i=2; i<=n; i++){
//         newnode=new node();
//         cin>>data;
//         newnode->info = data;
//         newnode->link = NULL;
//         ptr->link = newnode;
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
//     public:
//     int info;
//     node *link;
// };
// int main(){
//     int n,data;
//     node *ptr,*newnode;
//     cin>>n;
//     node *start = new node();
//     cin>>data;
//     start->info = data;
//     start->link = NULL;
//     ptr = start;
//     for(int i=2; i<=n; i++){
//         newnode = new node();
//         cin>>data;
//         newnode -> info = data;
//         newnode -> link = NULL;
//         ptr->link = newnode;
//         ptr=ptr->link;
//     }
//     ptr=start;
//     while(ptr!=NULL){
//         cout<<ptr->info<<" ";
//         ptr = ptr->link;
//     }
// }

// #include <iostream>
// using namespace std;
// class node{
//     public:
//     int info;
//     node *link;
// };
// int main(){
//     int n, data;
//     node *ptr, *newnode;
//     cin>>n;
//     node *start = new node();
//     cin>>data;
//     start->info=data;
//     start->link=NULL;
//     ptr=start;
//     for(int i=2; i<=n; i++){
//         newnode = new node;
//         cin>>data;
//         newnode->info=data;
//         newnode->link=NULL;
//         ptr->link = newnode;
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

// int main() {
//     int *ptr;
//     ptr = new int;
//     delete ptr;
//     *ptr = 5;
//     cout << *ptr;
//     return 0;
// }

