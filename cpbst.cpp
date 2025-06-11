#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node *left, *right;
    node(int info){
        data = info;
        left = right = nullptr;
    }
};
class BST{
    public:
    node *root;
    BST(){
        root= nullptr;
    }
    void insert(){
        if(root==nullptr){
            root = new root(info);
        }else{
            insertrec(root,info);
        }
    }
    void insertrec(node *current, int info){
        if(current->data <= info){
            if(current->right == nullptr){
                current->right = new node(info);
            }else{
                insertrec(current->right,info);
            }
        }else{
            if(current->left == nullptr){
                current->left = new node(info);
            }else{
                insertrec(current->left,info);
            }
        }
    }
    void displayinorder(node *root){
        if(root!=nullptr){
            displayinorder(root->left);
            cout<<root->data<<" ";
            displayinorder(root->right);
        }
    }
    void displaypreorder(node *root){
        if(root!=nullptr){
            cout<<root->data<<" ";
            displaypreorder(root->left);
           
            displaypreorder(root->right);
        }
    }
    void displaypostorder(node *root){
        if(root!=nullptr){
            
            displaypostorder(root->left);
           
            displaypostorder(root->right);
            cout<<root->data<<" ";
        }
    }

};

int main(){
BST tree;

}