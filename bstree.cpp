#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *left,*right;
    node(int info){
        data=info;
        left=right=NULL;
    }
};
class BST{
    public:
    node *root;
    BST(){
        root = NULL;
    }
    void insert(int info){
        if(root==NULL){
            root = new node(info);

        }else{
            insertrec(root,info);
        }
    }
    void insertrec(node *current, int info){
        if(current->data<=info){
            if(current->right==NULL){
                current->right = new node(info);
            }else{
                insertrec(current->right, info);
            }
        }else{
            if(current->left == NULL){
                current->left = new node(info);
            }else{
                insertrec(current->left,info);
            }
        }
    }
    void displayinorder(node *root){
        if(root!=NULL){
            displayinorder(root->left);
            cout<<root->data<<" ";
            displayinorder(root->right);
        }
    }
     void displaypreorder(node *root){
        if(root!=NULL){
            cout<<root->data<<" ";
            displayinorder(root->left);
            displayinorder(root->right);
        }
    }
    void displaypostorder(node *root){
        if(root!=NULL){
            
            displayinorder(root->left);
            displayinorder(root->right);
            cout<<root->data<<" ";
        }
    }
};
int main(){
    BST tree;
    tree.insert(30);
    tree.insert(40);
    tree.insert(50);
    tree.insert(10);
    tree.insert(15);
    tree.insert(25);
    cout<<"Inorder sequence: ";
    tree.displayinorder(tree.root);
    cout<<"\npreorder sequence: ";
    tree.displaypreorder(tree.root);
    cout<<"\npostorder sequence: ";
    tree.displaypostorder(tree.root);
}

// #include <iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node *left, *right;
//     node(int value){
//         data=value;
//         left=right=NULL;
//     }
// };
// node insert(node head, int value){
//     if(head==nullptr){
//         return new node(value);
//     }
//     if(head->dat)
// }

// int main(){

// }